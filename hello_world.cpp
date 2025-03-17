#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Введите ваше имя: "; // Запрос имени пользователя
    std::cin >> name;
    std::cout << "Привет, мир! от " << name << std::endl; // Вывод приветствия
    return 0;
}

