#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()

    //�������� �� ������������ ��� ����� �, � (�>A)
    //������ ������ �� � �� �, ������� �������� ������� ����� ����������� �� 3 � ���� �output�
{
    setlocale(LC_ALL, "Russian");
	int A,B;
	ofstream fin("output.txt");
	std::cout << "������� ��� ����� A � B:";
	std::cin >> A >> B;
	if (B <= A)
    {
        std::cout << "������" << std::endl;
    }
for (int i = A; i<=B; i++)
{
    fin << i*3 << std::endl;
}
 	fin.close();
	return 0;
}

