{
	type => "config",
	comment => "URLENCODED: msc_reqbody_no_files_length == reqbody_length",
	conf => qq(
		SecRuleEngine On
		SecRequestBodyAccess On
        SecDebugLog $ENV{DEBUG_LOG}
        SecDebugLogLevel 9
	),
	match_response => {
		status => qr/^200$/,
	},
	request => new HTTP::Request(
		POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
		[
			"Content-Type" => "application/x-www-form-urlencoded",
		],
		"a=1&b=2&c=3&d=4&e=5&f=6",
	),
},
