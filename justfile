ftw case:
  FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./ftw/run.sh log-{{case}})

ftw-debug case:
  FTW_DEBUG=1 FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./ftw/run.sh log-{{case}}

ftw-all:
  ./ftw/run.sh

build-docker-compose:
  (cd ftw; docker compose build --no-cache --pull --build-arg CRS_VERSION=v4.25.0)

build:
  ./build.sh
  ./configure --enable-parser-generation
  bear -- make -j

build-ftw:
  go build -C ../../coreruleset/go-ftw -trimpath -tags netgo,osusergo -o "${PWD}/ftw/go-ftw"
