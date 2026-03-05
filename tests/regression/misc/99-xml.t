{
	type => "config",
	comment => "XML: msc_reqbody_no_files_length == reqbody_length",
	conf => qq(
		SecRuleEngine On
		SecDebugLog $ENV{DEBUG_LOG}
		SecDebugLogLevel 9
		SecRequestBodyAccess On
		SecRequestBodyLimitAction ProcessPartial
		SecRequestBodyLimit 12
		SecRule REQUEST_HEADERS:Content-Type "(?:application(?:/soap\\+|/)|text/)xml" "id:'200000',phase:1,t:none,t:lowercase,pass,nolog,ctl:requestBodyProcessor=XML"
	),
	match_response => {
		status => qr/^403$/,
	},
	request => new HTTP::Request(
		POST => "http://$ENV{SERVER_NAME}:$ENV{SERVER_PORT}/test.txt",
		[
			"Content-Type" => "application/xml",
		],
		'<a>1</a>',
	),
},
