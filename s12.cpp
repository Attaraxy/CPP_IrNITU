#include <iostream>

using namespace std;

int main()
{
    //Используя другой тип цикла, перебрать числа от 1 до 1000 с шагом 4.
    //Найти сумму всех чисел, которые делятся на 7 без остатка

    int sum {};
    for (int i {1}; i<1000; i+=4)
    {
        if (i % 7 == 0) continue;
        sum +=i;
    }
    std::cout << "sum= " << sum << std::endl;













    return 0;
}
