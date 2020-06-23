#include <iostream>
#include "Book.h"

int main()
{
    Book TestBook;
    Book TestBookTwo("Harry Potter", 700);
    std::cout << TestBook.getName() << std::endl;
    std::cout << TestBookTwo.getName() << std::endl;
    return 0;
}
