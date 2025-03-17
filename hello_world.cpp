#include <iostream>
#include <string>

int
main()
{
  std::string name;
  std::cout << "Enter your name: "; // Prompt user for name
  std::cin >> name;
  std::cout << "Hello, world from " << name << "!" << std::endl; // Greet user
  return 0;
}
