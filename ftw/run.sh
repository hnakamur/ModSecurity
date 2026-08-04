#!/bin/bash
set -eu -o pipefail

CRS_VERSION="${CRS_VERSION:-v4.28.0}"

show_usage_and_exit() {
  >&2 cat <<EOF
Usage: $0 [OPTIONS] [log_dir]

This script runs OWASP CRS regression tests using ftw and NGINX httpd server.

## Options
  --capture     Capture requests and responses with tcpdump while running tests
  --no-build    Skip docker compose build
                Note: you need build when you change between runs with and without --capture.
  -h, --help    Show this help

## Environment variables

CRS_VERSION     Tag or version of https://github.com/coreruleset/coreruleset (default: $CRS_VERSION)
FTW_DEBUG       Whether to enable ftw debug log.
FTW_INCLUDE     Specify a regular expression to run only specified test cases.

## Example

Runs all tests:
  $0

Runs only tests whose ID begins with 980170-1 and enable debug log:
  FTW_DEBUG=1 FTW_INCLUDE='^980170-1$' $0
EOF
  exit 2
}

main() {
  do_build=1
  COMPOSE_FILE=docker-compose.yml
  while (($#)); do
    case "$1" in
    --no-build)
      do_build=0
      shift
      ;;
    --capture)
      COMPOSE_FILE=compose-capture.yml
      shift
      ;;
    -h|--help|-*|--*)
      show_usage_and_exit
      ;;
    *)
      break
      ;;
    esac
  done
  case "${1:-}" in
  --help)
    show_usage_and_exit
    ;;
  esac

  # change to parent directory of this script
  cd -- "$(dirname -- "${BASH_SOURCE[0]}")"

  log_dir="${1:-./log}"

  export COMPOSE_FILE
  export COMPOSE_PROGRESS=plain

  if (( "${do_build}" )); then
    docker compose build --pull --no-cache --build-arg CRS_VERSION="${CRS_VERSION}"
  fi

  mkdir -p "${log_dir}"
  rm -f "${log_dir}"/*

  docker compose up --abort-on-container-exit 2>&1 \
    | sed -n -u '/^ftw-[0-9][0-9]*[^|]*|/{s/^ftw-[0-9][0-9]*[^|]*|//;p}' | tee "${log_dir}/run-ftw.log"
}

main "$@"
