ftw case:
  FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./ftw/run.sh log-{{case}})

ftw_debug case:
  FTW_DEBUG=1 FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./ftw/run.sh log-{{case}}

ftw_all:
  ./ftw/run.sh

build:
  ./build.sh
  ./configure --enable-parser-generation
  make -j

build_ftw:
  go build -C ../../coreruleset/go-ftw -trimpath -tags netgo,osusergo -o "${PWD}/ftw/go-ftw"
