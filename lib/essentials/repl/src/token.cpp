#include <iostream>
#include <string>

#include "token.hpp"
#include "linenoise.hpp"

int main() {
  const auto save_folder = ".history.tmp";
  std::string Repl;
  linenoise::LoadHistory(save_folder);
  while (true) {
      auto quit = linenoise::Readline("\e[1;34m>]\e[1;0m ", Repl);
      if (quit) {
        break;
      };
      std::cout << Loop(Repl) << std::endl;
      linenoise::AddHistory(Repl.c_str());
    };
  linenoise::SaveHistory(save_folder);
  return 0;
}
