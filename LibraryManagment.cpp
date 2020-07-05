#include <iostream>
#include <vector>
#include "Book.h"
#include "MemClear.h"
#include "Menu.h"
#include "SaveToFile.h"
#include "LoadFromFile.h"




int main()
{
    std::vector<Book*> InventoryBooks;

    LoadFromFile(InventoryBooks,"InventoryList.txt");
    displayMenu(InventoryBooks);
 
    SaveToFile(InventoryBooks, "InventoryList.txt");
    ClearMemory(InventoryBooks);

    return 0;
}

