#include <iostream>
#include <vector>
#include "Book.h"
#include "MemClear.h"
#include "Menu.h"
#include "SaveToFile.h"
#include "LoadFromFile.h"
#include "vld.h"



int main()
{
    std::vector<Book*> Books;

    LoadFromFile(Books);
    displayMenu(Books);
 
    SaveToFile(Books);
    ClearMemory(Books);
    return 0;
}
