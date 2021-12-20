.PHONY: build

build: \
  clang++ -c token.o lib/essentials/repl/src/token.cpp \
  clang++ -Xlinker token.o \

