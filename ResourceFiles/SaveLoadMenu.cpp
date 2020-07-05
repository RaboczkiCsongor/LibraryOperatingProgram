#include "SaveLoadMenu.h"


void DisplaySaveLoadMenu() {
	std::cout << "2. Load from File" << std::endl;
	std::cout << "1. Save to File" << std::endl;
	std::cout << "0. Back" << std::endl;
}

void SelectionSaveLoadMenu(std::vector < Book*> &myVector ,int selection) {
	switch (selection)
	{
	case 0:
		break;
	case 1:
		SaveToFile(myVector,"InventoryList.txt");
		
		break;
	case 2:
		LoadFromFile(myVector, "InventoryList.txt");
		break;
	}
}
