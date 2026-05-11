#!/usr/bin/perl
#
# Convert v2 regression tests to v3 JSON format.
#
# Syntax: convert-regression-test-v2-to-v3.pl [options] file
#
#
use strict;
use Time::HiRes qw(gettimeofday sleep);
use POSIX qw(WIFEXITED WEXITSTATUS WIFSIGNALED WTERMSIG);
use File::Spec::Functions qw(rel2abs);
use File::Basename qw(basename dirname);
use FileHandle;
use Getopt::Std;
# use IO::Socket;
use Hash::Ordered;
use JSON::PP;
use HTTP::Request;

my @TYPES = qw(config misc action target rule);
my $SCRIPT = basename($0);
my $SCRIPT_DIR = File::Spec->rel2abs(dirname($0));
my $REG_DIR = "$SCRIPT_DIR/regression";
my $SROOT_DIR = "$REG_DIR/server_root";
my $DATA_DIR = "$SROOT_DIR/data";
my $TEMP_DIR = "$SROOT_DIR/tmp";
my $UPLOAD_DIR = "$SROOT_DIR/upload";
my $CONF_DIR = "$SROOT_DIR/conf";
my $MODULES_DIR = q(/usr/lib/apache2/modules);
my $FILES_DIR = "$SROOT_DIR/logs";
my $PID_FILE = "$FILES_DIR/httpd.pid";
my $HTTPD = q(/usr/sbin/apache2);
my $PASSED = 0;
my $TOTAL = 0;
my $BUFSIZ = 32768;
my %C = ();
my %FILE = ();

$SIG{TERM} = $SIG{INT} = \&handle_interrupt;

my %opt;
getopts('h', \%opt);

sub usage {
    print stderr <<"EOT";
@_
Usage: $SCRIPT file

 Options:
  -h        This help.

EOT

    exit(1);
}

usage() if ($opt{h});

#dbg("OPTIONS: ", \%opt);

convertfile($ARGV[0]);
exit 0;

sub convertfile {
    my($fn) = @_;
    my @data = ();
    my $edata;
    my @C = ();
    my @test = ();
    my $teststr;

    open(CFG, "<$fn") or quit(1, "Failed to open \"$fn\": $!");
    @data = <CFG>;
  
    $edata = q/@C = (/ . join("", @data) . q/)/;
    eval $edata;
    quit(1, "Failed to read test data \"$fn\": $@") if ($@);

    unless (@C) {
        print STDERR "\nNo tests defined for $fn";
        return;
    }

    my @json_tests = ();
    for my $t (@C) {
        my %t = %{$t || {}};

        tie my %client_obj, 'Hash::Ordered', (
            ip => "200.249.12.31",
            port => 123,
        );
        tie my %server_obj, 'Hash::Ordered', (
            ip => "200.249.12.31",
            port => 80,
        );

        tie my %response_headers, 'Hash::Ordered', (
            "Date" => "Mon, 13 Jul 2015 20:02:41 GMT",
            "Last-Modified" => "Sun, 26 Oct 2014 22:33:37 GMT",
            "Content-Type" => "text/html",
            "Content-Length" => "8",
        );
        my @response_body = ();
        push(@response_body, "no need.");
        tie my %response, 'Hash::Ordered', (
            headers => \%response_headers,
            body => \@response_body,
        );


        tie my %expected, 'Hash::Ordered';
        my $error_re = get_match_log_pattern(\%t, 'error');
        if (defined $error_re) {
            $expected{error_log} = $error_re;
        }
        my $debug_re = get_match_log_pattern(\%t, 'debug');
        if (defined $debug_re) {
            $expected{debug_log} = $debug_re;
        }
        my $status = get_match_response_status(\%t);
        $expected{http_code} = $status;
        tie my %t_json_obj, 'Hash::Ordered', (
            enabled => 1,
            version_min => 300000,
            type => $t{type},
            title => $t{comment},
            client => \%client_obj,
            server => \%server_obj,
            request => convert_request_to_json($t{request}),
            response => \%response,
            expected => \%expected,
            rules => convert_conf_to_rules($t{conf}),
        );

        push(@json_tests, \%t_json_obj);
    }

    print JSON::PP->new->indent_length(2)->indent(1)->space_after(1)->encode(\@json_tests);
}

sub convert_conf_to_rules {
    my ($c) = @_;

    $c =~ s/^[\n\t]+|[\n\t]+$//g;
    my @rules = map {
        s/^[\n\t]+|[\n\t]+$//gr
    } split /\n/, $c;
    return [ grep {!/^SecDebugLog/} @rules ];
}

sub convert_request_to_json {
    my $r = $_[0];

    # Allow test to execute code
    if (ref $r eq "CODE") {
        print STDERR "converting CODE request is not implemented yet.\n";
        return {};
    }

    if (ref $r ne "HTTP::Request") {
        $r = HTTP::Request->parse($r);
    }

    my %h;
    tie my %h, 'Hash::Ordered', (
        'Host' => 'localhost',
        'User-Agent' => 'curl/7.38.0',
    );
    my $headers = $r->headers;
    for my $name ($headers->header_field_names) {
        if ($name =~ /^(Host|User-Agent)$/) {
            next;
        }
        my @values = $headers->header($name);
        my $joined = join(", ", @values);
        $h{$name} = $joined;
    }
    my $content = $r->decoded_content;
    if (!defined $h{'Transfer-Encoding'} || $h{'Transfer-Encoding'} != 'chunked') {
        $h{'Content-Length'} = length($content) . "";
    }
    my @body = $content =~ /(.+?(?:\r\n|\r|\n)|.+)/g;
    tie my %request, 'Hash::Ordered', (
        headers => \%h,
        uri => $r->uri->path . (defined $r->uri->query ? '?' . $r->uri->query : ''),
        method => $r->method,
        body => \@body,
    );
    return \%request;
}

sub get_match_response_status {
    my ($data) = @_;

    return undef unless ref $data eq 'HASH';

    my $mr = $data->{match_response};
    return undef unless ref $mr eq 'HASH';

    my $re = $mr->{status};
    return undef unless ref $re eq 'Regexp';

    my $str = "$re";  # qr/^200$/
    return int($1) if $str =~ m{^\(\?\^:\^(.*)\$\)$};

    return undef;
}

sub get_match_log_pattern {
    my ($data, $level) = @_;

    return undef unless ref $data eq 'HASH';

    my $ml = $data->{match_log};
    return undef unless ref $ml eq 'HASH';

    my $entry = $ml->{$level};
    return undef unless ref $entry eq 'ARRAY';

    my $re = $entry->[0];
    return undef unless ref $re eq 'Regexp';

    my $str = "$re";  # (?^:...)
    return $1 if $str =~ /^\(\?\^:(.*)\)$/;

    return undef;
}

# Trim indent in action strings
sub trim_action_indent {
    my $r = $_[0];
    $r =~ s/[\t]+//mg;
    return $r;
}

# Take out any indenting and translate LF -> CRLF
sub normalize_raw_request_data {
    my $r = $_[0];

    # Allow for indenting in test file
    $r =~ s/^[ \t]*\x0d?\x0a//s;
    my($indention) = ($r =~ m/^([ \t]*)/s); # indention taken from first line
    $r =~ s/^$indention//mg;
    $r =~ s/(\x0d?\x0a)[ \t]+$/$1/s;

    # Translate LF to CRLF
    $r =~ s/^\x0a/\x0d\x0a/mg;
    $r =~ s/([^\x0d])\x0a/$1\x0d\x0a/mg;

    return $r;
}

sub match_response {
    my($name, $resp, $re) = @_;

    msg("Warning: Empty regular expression.") if (!defined $re or $re eq "");

    if ($name eq "status") {
        return $& if ($resp->code =~ m/$re/);
    }
    elsif ($name eq "content") {
        return $& if ($resp->content =~ m/$re/m);
    }
    elsif ($name eq "raw") {
        return $& if ($resp->as_string =~ m/$re/m);
    }

    return;
}

sub read_log {
    my($name, $timeout, $graph) = @_;
    return match_log($name, undef, $timeout, $graph);
}

sub match_log {
    my($name, $re, $timeout, $graph) = @_;
    my $t0 = gettimeofday;
    my($fh,$rbuf) = ($FILE{$name}{fd}, \$FILE{$name}{buf});
    my $n = length($$rbuf);
    my $rc = undef;

    unless (defined $fh) {
        msg("Error: File \"$name\" is not opened for matching.");
        return;
    }

    $timeout = 0 unless (defined $timeout);

    my $i = 0;
    my $graphed = 0;
    READ: {
        do {
            my $nbytes = $fh->sysread($$rbuf, $BUFSIZ, $n);
            if (!defined($nbytes)) {
                msg("Error: Could not read \"$name\" log: $!");
                last;
            }
            elsif (!defined($re) and $nbytes == 0) {
                last;
            }

            # Remove APR pool debugging
            $$rbuf =~ s/POOL DEBUG:[^\n]+PALLOC[^\n]+\n//sg;

            $n = length($$rbuf);

            #dbg("Match \"$re\" in $name \"$$rbuf\" ($n)");
            if ($$rbuf =~ m/$re/m) {
                $rc = $&;
                last;
            }
            unless ($nbytes == $BUFSIZ) {
                # wait until we can read from the file but max 0.1 secs
                my $rin = '';
                vec($rin, fileno($fh), 1) = 1;
                select($rin, undef, undef, 0.1);
            }
            if ($graph and $opt{d}) {
                $i++;
                if ($i == 10) {
                    $graphed++;
                    $i=0;
                    print STDERR $graph if ($graphed == 1);
                    print STDERR "."
                }
            }
        } while (gettimeofday - $t0 < $timeout);
    }
    print STDERR "\n" if ($graphed);

    return $rc;
}

sub match_file {
    my($neg,$fn) = ($_[0] =~ m/^(-?)(.*)$/);
    unless (exists $FILE{$fn}) {
        eval {
            $FILE{$fn}{fn} = $fn;
            $FILE{$fn}{fd} = new FileHandle($fn, O_RDONLY) or die "$!\n";
            $FILE{$fn}{fd}->blocking(0);
            $FILE{$fn}{buf} = "";
        };
        if ($@) {
            msg("Warning: Failed to open file \"$fn\": $@");
            return;
        }
    }
    return match_log($_[0], $_[1]); # timeout makes no sense
}

sub quote_shell {
    my($s) = @_;
    return $s unless ($s =~ m|[^\w!%+,\-./:@^]|);
    $s =~ s/(['\\])/\\$1/g;
    return "'$s'";
}

sub escape {
    my @new = ();
    for my $c (split(//, $_[0])) {
        my $oc = ord($c);
        push @new, ((($oc >= 0x20 and $oc <= 0x7e) or $oc == 0x0a or $oc == 0x0d) ? $c : sprintf("\\x%02x", ord($c)));
    }
    join('', @new);
}

sub encode_chunked {
    my($data, $size) = @_;
    $size = 128 unless ($size);
    my $chunked = "";
  
    my $n = 0;
    my $bytes = length($data);
    while ($bytes >= $size) {
        $chunked .= sprintf "%x\x0d\x0a%s\x0d\x0a", $size, substr($data, $n, $size);
        $n += $size;
        $bytes -= $size;
    }
    if ($bytes) {
        $chunked .= sprintf "%x\x0d\x0a%s\x0d\x0a", $bytes, substr($data, $n, $bytes);
    }
    $chunked .= "0\x0d\x0a\x0d\x0a"
}

sub quit {
    my($ec,$msg) = @_;
    $ec = 0 unless (defined $_[0]);

    print STDERR "$msg" . "\n" if (defined $msg);

    exit $ec;
}
