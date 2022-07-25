#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item item;

    while (std::cin >> item)
        std::cout << item << std::endl;

    return 0;
}
