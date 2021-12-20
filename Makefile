.PHONY: build

build: \
  g++ -c token.o lib/essentials/repl/src/token.cpp \
  g++ -Xlinker token.o \

