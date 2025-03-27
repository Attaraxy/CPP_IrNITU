#include <iostream>

using namespace std;

int main()
{
    //Создайте текстовый массив с названиями цифр от 0 до 9.
    //Пользователь вводит число и получает на экран его название.
    setlocale(LC_ALL, "Russian");
    const char* numbers[] = {"ноль", "один", "два" , "три", "четыре", "пять",
                             "шесть", "семь", "восемь","девять"};
    int c;
    std::cout << "Введите число от 0 до 9: ";
    std::cin >> c;

    std::cout << ((c >= 0 && c <= 9) ? numbers[c] : "Ошибка: введите число от 0 до 9.") << std::endl;
    return 0;
}
