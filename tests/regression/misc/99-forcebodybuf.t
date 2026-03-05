{
	type => "config",
	comment => "reqbody_buffering: msc_reqbody_no_files_length == reqbody_length",
	conf => qq(
		SecRuleEngine On
		SecRequestBodyAccess On
        SecDebugLog $ENV{DEBUG_LOG}
        SecDebugLogLevel 9
		SecRule REQUEST_URI "/test.txt" "id:500219,phase:1,t:none,pass,ctl:forceRequestBodyVariable=On"
	),
	match_response => {
		status => qr/^200$/,
	},
	request => new HTTP::Request(
		POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
		[
			"Content-Type" => "text/plain",
		],
		"aaaaaa",
	),
},
