// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file bush.license for terms.

#include <inlib/platform>

#include <iostream>
#include <cstdlib>

int main(int argc,char** argv) {
  char compiler[128];
  inlib::compiler(compiler);
  std::cout << inlib::os() << "-" << inlib::processor() << "-" << compiler << std::endl;
  return EXIT_SUCCESS;
}

