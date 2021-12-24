#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "lexical.hpp"

std::string Read (std::string Repl) {
  return Repl;
};

std::string Eval (std::string Repl) {
  return Repl;
};

std::string Print (std::string Repl) {
  return Repl;
};

std::string Loop (std::string Repl) {
  auto AST = Read(Repl);
  auto Output = Eval(AST);
  return Print(Output);
};

#endif
