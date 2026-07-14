#!/bin/sh
set -eu

CRS_VERSION=${CRS_VERSION:-v4.25.1}

if [ $# -ne 1 -o "$1" = "-h" -o "$1" = "--help" ]; then
  >&2 cat <<EOF
Usage: $0 log_dest_dir

This script runs OWASP CRS regression tests using ftw and Apache httpd server.
It also captures HTTP traffic using tcpdump.

Supported optional environment variables:

CRS_VERSION   Tag or version of https://github.com/coreruleset/coreruleset (default: $CRS_VERSION)
FTW_DEBUG     Whether to enable ftw debug log.
FTW_INCLUDE   Specify a regular expression to run only specified test cases.

## Example

Runs all tests:
  $0 log

Runs only tests whose ID begins with 980170 and enable debug log:
  FTW_DEBUG=1 FTW_INCLUDE=^980170 $0 log
EOF
  exit 2
fi

log_dest_dir="$1"

export COMPOSE_FILE=compose-capture.yml
export COMPOSE_PROGRESS=plain

docker compose build --pull --no-cache --build-arg CRS_VERSION=$CRS_VERSION

mkdir -p "$log_dest_dir"
docker compose up -d

(docker compose logs -f --no-log-prefix ftw 2>&1 | tee "$log_dest_dir/run-ftw.log") &

docker compose exec -d capture-ftw tcpdump -i any -U -w /home/ftw.pcap 'tcp port 8080'
docker compose exec -d capture-crs-apache tcpdump -i any -U -w /home/crs-apache.pcap 'tcp port (8080 or 8081)'
docker compose exec -d capture-backend tcpdump -i any -U -w /home/backend.pcap 'tcp port (8080 or 8081)'

set +e
docker compose wait ftw
ftw_rc=$?

for logfile in access.log modsec_audit.log modsec_debug.log; do
  docker compose cp crs-apache:/var/log/apache2/$logfile "$log_dest_dir"
done
for svc in ftw crs-apache backend; do
  docker compose cp "capture-$svc:/home/$svc.pcap" "$log_dest_dir"
done

docker compose down -v

echo service "ftw" exited with status code $ftw_rc
exit $ftw_rc
