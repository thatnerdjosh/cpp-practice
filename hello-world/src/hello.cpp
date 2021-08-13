#include <iostream>
#include <hello.hpp>

int main() {
  Hello::Person person;
  std::cout << "Your name is: ";
  std::cin >> person.name;
  std::cout << "Hello, " << person.name << std::endl;
  return 0;
}

