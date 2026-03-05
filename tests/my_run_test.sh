#!/bin/sh
set -eu

if [ $# -ne 1 ]; then
  >&2 echo Usage: $0 test_file
  exit 2
fi

test_file="$1"
debug_log=./regression/server_root/logs/modsec_debug.log

rm -f "$debug_log"
./run-regression-tests.pl "$test_file" >/dev/null 2>&1 || :
echo === $test_file ===
grep -o -P '((XML|JSON|URLENCODED|reqbody_buffering): modsecurity_request_body_store added \d+ to no_files_length|Multipart: multipart_process_part_(header|data) added \d+ to no_files_length.*|Request body no files length: \d+|Input filter: Completed receiving request body \(length \d+\)\.)' "$debug_log"
