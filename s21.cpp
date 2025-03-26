#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()

    //Получить от пользователя два числа А, В (В>A)
    //Пройти циклом от А до В, вывести значение каждого числа умноженного на 3 в файл «output»
{
    setlocale(LC_ALL, "Russian");
	int A,B;
	ofstream fin("output.txt");
	std::cout << "Введите два числа A и B:";
	std::cin >> A >> B;
	if (B <= A)
    {
        std::cout << "Ошибка" << std::endl;
    }
for (int i = A; i<=B; i++)
{
    fin << i*3 << std::endl;
}
 	fin.close();
	return 0;
}

