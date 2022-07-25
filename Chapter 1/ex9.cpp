#include <iostream>

int main(void)
{
    int i = 50, sum = 0;

    while (i <= 100)
        sum += i++;

    std::cout << sum << std::endl;

    return 0;
}
