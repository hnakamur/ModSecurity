#!/bin/bash
set -eu -o pipefail

CRS_VERSION=${CRS_VERSION:-v4.28.0}

show_usage_and_exit() {
  >&2 cat <<EOF
Usage: $0 [log_dir]

This script runs OWASP CRS regression tests using ftw and NGINX httpd server.

Supported optional environment variables:

CRS_VERSION   Tag or version of https://github.com/coreruleset/coreruleset (default: $CRS_VERSION)
FTW_DEBUG     Whether to enable ftw debug log.
FTW_INCLUDE   Specify a regular expression to run only specified test cases.

## Example

Runs all tests:
  $0

Runs only tests whose ID begins with 980170 and enable debug log:
  FTW_DEBUG=1 FTW_INCLUDE=^980170 $0 log
EOF
  exit 2
}

main() {
  case "${1:-}" in
  -h)
    show_usage_and_exit
    ;;
  --help)
    show_usage_and_exit
    ;;
  esac

  # change to parent directory of this script
  cd -- "$(dirname -- "${BASH_SOURCE[0]}")"

  log_dir="${1:-./log}"

  export COMPOSE_FILE=docker-compose.yml
  export COMPOSE_PROGRESS=plain

  if [ "${SKIP_BUILD:-0}" -ne 1 ]; then
    docker compose build --pull --no-cache --build-arg CRS_VERSION="${CRS_VERSION}"
  fi

  mkdir -p "${log_dir}"
  rm -f "${log_dir}"/*

  docker compose up --abort-on-container-exit 2>&1 \
    | sed -n '/^ftw-1[^|]*|/{s/^ftw-1[^|]*|//;p}' | tee "${log_dir}/run-ftw.log"
}

main "$@"
