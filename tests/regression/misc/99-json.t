{
	type => "config",
	comment => "JSON: msc_reqbody_no_files_length == reqbody_length",
	conf => qq(
		SecRuleEngine On
		SecDebugLog $ENV{DEBUG_LOG}
		SecDebugLogLevel 9
		SecRequestBodyAccess On
		SecRequestBodyLimitAction ProcessPartial
		SecRule REQUEST_HEADERS:Content-Type "application/json" "id:'200000',phase:1,t:none,t:lowercase,pass,nolog,ctl:requestBodyProcessor=JSON"
	),
	match_response => {
		status => qr/^200$/,
	},
	request => new HTTP::Request(
		POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
		[
			"Content-Type" => "application/json",
		],
		normalize_raw_request_data(
			q({"a":1}),
		),
	),
},


