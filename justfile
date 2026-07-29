ftw case:
  (cd ftw; FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./run_tests.sh {{case}})

ftw_debug case:
  (cd ftw; FTW_DEBUG=1 FTW_INCLUDE='^{{case}}$' SKIP_BUILD=1 ./run_tests.sh {{case}})

ftw_all:
  (cd ftw; ./run_tests.sh .)

build:
  ./build.sh
  ./configure --enable-parser-generation
  make -j
