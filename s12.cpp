#include <iostream>

using namespace std;

int main()
{
    //��������� ������ ��� �����, ��������� ����� �� 1 �� 1000 � ����� 4.
    //����� ����� ���� �����, ������� ������� �� 7 ��� �������

    int sum {};
    for (int i {1}; i<1000; i+=4)
    {
        if (i % 7 == 0) continue;
        sum +=i;
    }
    std::cout << "sum= " << sum << std::endl;













    return 0;
}
