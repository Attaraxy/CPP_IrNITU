#include <iostream>

using namespace std;

int main()
{
    //�������� ��������� ������ � ���������� ���� �� 0 �� 9.
    //������������ ������ ����� � �������� �� ����� ��� ��������.
    setlocale(LC_ALL, "Russian");
    const char* numbers[] = {"����", "����", "���" , "���", "������", "����",
                             "�����", "����", "������","������"};
    int c;
    std::cout << "������� ����� �� 0 �� 9: ";
    std::cin >> c;

    std::cout << ((c >= 0 && c <= 9) ? numbers[c] : "������: ������� ����� �� 0 �� 9.") << std::endl;
    return 0;
}
