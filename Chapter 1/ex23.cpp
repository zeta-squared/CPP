#include <iostream>
#include "Sales_item.h"

int main(void)
{
    Sales_item book, item;
    int trans = 1;

    if (std::cin >> book) {
        while (std::cin >> item)
            if (book.isbn() == item.isbn())
                trans++;
            else {
                std::cout << "There are " << trans << " transactions for ISBN "
                    << book.isbn() << std::endl;
                book = item;
                trans = 1;
            }
        
        std::cout << "There are " << trans << " transactions for ISBN "
            << book.isbn() << std::endl;
    } else {
        std::cerr << "No transactions recorded." << std::endl;
        return -1;
    }


    return 0;
}
