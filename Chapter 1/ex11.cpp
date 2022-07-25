#include <iostream>

int main(void)
{
    int i1, i2;

    std::cout << "Enter two integers: " << std::endl;
    std::cin >> i1 >> i2;
    while (i1 <= i2)
        std::cout << i1++ << std::endl;

    return 0;
}
