#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item item, book;

    std::cin >> book;
    while (std::cin >> item)
        book += item;

    std::cout << book << std::endl;

    return 0;
}
