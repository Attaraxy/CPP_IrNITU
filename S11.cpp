#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
