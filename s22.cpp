#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //��������� ���� ��������� ������ ����� �� �����
    //�output� � ������� �� ����� � ����: �n. �����, ��� n - ���������� ����� ����� � �����
    std::ifstream fin("output.txt");
    int n, i = 1;
    while (fin >> n)
    {
        std::cout << n << "����� : " << i << std::endl;
        i++;
    }
    fin.close();



    std::cout << n <<  "�����" << std::endl;
    return 0;
}
