#include <iostream>

int main(void)
{
    int i = 10, *p = &i;

    /* Print the values of the variable and pointer. */
    std::cout << i << " " << p << "\n"; 
    
    /* Alter the value to which the pointer points and the value of the pointer
     * itself.
     */
    *p = 5;
    p = nullptr;

    /* Print the new values of the pointer and the value which it points to. */
    std::cout << p << "\n";
    std::cout << i << "\n";

    return 0;
}
