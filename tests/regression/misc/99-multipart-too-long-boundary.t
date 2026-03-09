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
	match_log => {
		error => [ qr/Multipart parsing error \(init\): Multipart: Invalid boundary in C-T \(length\)\./, 1 ],
	},
    match_response => {
        status => qr/^403$/,
    },
    request => new HTTP::Request(
        POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
        [
            "Content-Type" => q(multipart/form-data; boundary=) . '0' x 995,
        ],
        normalize_raw_request_data(
            q(
                --) . '0' x 995 . q(
                Content-Disposition: form-data; name="file1"; filename="name.txt"
                Content-Type: plain/text
                
                1
                --) . '0' x 995 . q(--
            ),
        ),
    ),
},
