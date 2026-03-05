{
    type => "misc",
    comment => "multipart parser (normal)",
    conf => qq(
        SecRuleEngine On
        SecDebugLog $ENV{DEBUG_LOG}
        SecDebugLogLevel 9
        SecRequestBodyAccess On
        SecRule MULTIPART_STRICT_ERROR "\@eq 1" "phase:2,deny,id:500055"
        SecRule MULTIPART_UNMATCHED_BOUNDARY "\@eq 1" "phase:2,deny,id:500056"
        SecRule REQBODY_PROCESSOR_ERROR "\@eq 1" "phase:2,deny,id:500057"
    ),
    match_response => {
        status => qr/^200$/,
    },
    request => new HTTP::Request(
        POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
        [
            "Content-Type" => q(multipart/form-data; boundary=0000),
        ],
        normalize_raw_request_data(
            q(
                --0000
                Content-Disposition: form-data; name="name"
                
                1
                --0000--
            ),
        ),
    ),
},

