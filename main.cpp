#include <iostream>
#include <string>
#include <mathutils/add.hpp>
#include <mathutils/about.hpp>

int main() {
  std::cout << "add(1, 2) = " << add(1, 2) << std::endl;
  std::cout << "About: " << about() << std::endl;
  return 0;
}
