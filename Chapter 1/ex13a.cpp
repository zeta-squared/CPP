#include <iostream>

int main(void)
{
    int sum = 0;

    for (int i = 50; i <= 100; i++)
        sum += i;

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
