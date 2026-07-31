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
