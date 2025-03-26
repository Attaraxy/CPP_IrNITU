#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //»спользу€ цикл прочитать каждое число из файла
    //Ђoutputї и вывести на экран в виде: Ђn. „ислої, где n - пор€дковый номер числа в файле
    std::ifstream fin("output.txt");
    int n, i = 1;
    while (fin >> n)
    {
        std::cout << n << "„исло : " << i << std::endl;
        i++;
    }
    fin.close();



    std::cout << n <<  "„исло" << std::endl;
    return 0;
}
