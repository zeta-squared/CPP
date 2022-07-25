#include <iostream>

int main(void)
{
    int i1, i2;

    std::cout << "Enter two integers: " << std::endl;
    std::cin >> i1 >> i2;
    std::cout << "The product of " << i1 << " and " << i2
        << " is " << i1 * i2 << std::endl;

    return 0;
}
