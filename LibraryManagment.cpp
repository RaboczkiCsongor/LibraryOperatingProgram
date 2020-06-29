#include <iostream>
#include <vector>
#include "Book.h"
#include "MemClear.h"
#include "Menu.h"
#include "vld.h"


int main()
{
    std::vector<Book*> Books;
    /*
    Books.push_back(new Book("J.K. Rowling","Harry Potter and the Order of The Pheonix", 870 , "Fantasy",10));
    Books.push_back(new Book("Suzanne Collins", "The Hunger Games", 374, "Fiction", 15));
    Books.push_back(new Book("Harper Lee", "To Kill a Mockingbird", 324, "Classics", 10));
    */
    displayMenu(Books);


    //std::cout << Books[0]->getName() << std::endl;
    //std::cout << Books[1]->getName() << std::endl;

    ClearMemory(Books);
    return 0;
}

