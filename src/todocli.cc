//
// Created by sungjunyoung on 20. 1. 2..
//

#include "todocli.h"
#include <CLI/CLI.hpp>

int main(int argc, char **argv) {
  CLI::App app{"Description"};

  std::string text = "default";
  app.add_option("-t,--text", text, "Test text argument");

  CLI11_PARSE(app, argc, argv);
  return 0;
}
