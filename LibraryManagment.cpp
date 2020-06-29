#include <iostream>
#include <vector>
#include "Book.h"
#include "MemClear.h"
#include "Menu.h"
#include "vld.h"


int main()
{
    std::vector<Book*> Books;
    
    Books.push_back(new Book());
    Books.push_back(new Book("J.K. Rowling","Harry Potter", 700 , "Fantasy",10));

    displayMenu(Books);


    //std::cout << Books[0]->getName() << std::endl;
    //std::cout << Books[1]->getName() << std::endl;

    ClearMemory(Books);
    return 0;
}

