#include <iostream>

int main(void)
{
    unsigned int u = 10, u2 = 42;
    std::cout << "u2 - u = " << u2 - u << std::endl;
    std::cout << "u - u2 = " << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << "i2 - i = " << i2 - i << std::endl;
    std::cout << "i - i2 = " << i - i2 << std::endl;

    std::cout << "i - u = " << i - u << std::endl;
    std::cout << "u - i = " << u - i << std::endl;

    return 0;
}
