#include <iostream>

int main(void)
{
    int i1, i2;

    std::cout << "Enter two integers: " << std::endl;
    std::cin >> i1 >> i2;
    std::cout << "The sum of ";
    std::cout << i1;
    std::cout << " and ";
    std::cout << i2;
    std::cout << " is ";
    std::cout << i1 + i2;
    std::cout << std::endl;

    return 0;
}
