
#include <iostream>
#include <string>
int main()
{   
    int age = 0;
    std::string name;
    double weight = 0;
    std::cout << "Введите ваше имя:";
    std::getline(std::cin,name);  
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    std::cout << "Ваш вес: "; 
    std::cin >> weight;
std::cout << "\n--- Данные пользователя ---" << std::endl;
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Возраст: " << age << " лет" << std::endl;
    std::cout << "Вес: " << weight << " кг" << std::endl;
 
}

