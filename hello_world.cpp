#include <iostream>
#include <string>

{
  std::string name;
  std::cout << "Enter your name: "; // Prompt user for name
  std::cin >> name;
  std::cout << "Hello, world from " << name << "!" << std::endl; // Greet user
  
int main() {
    std::string name;
    std::cout << "Введите ваше имя: "; // Запрос имени пользователя
    std::cin >> name;
    std::cout << "Привет, мир! от " << name << std::endl; // Вывод приветствия
    return 0;

}

