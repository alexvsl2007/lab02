#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Enter your name: "; // Request user name
  std::cin >> name;
  std::cout << "Hello, World! from " << name << std::endl; // Output greeting
  return 0;
}
