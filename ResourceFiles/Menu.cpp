#include "Menu.h"


void MenuOptions() {
	std::cout << "4. Save/Load" << std::endl;
	std::cout << "3. Restoration" << std::endl;
	std::cout << "2. Add/Remove" << std::endl;
	std::cout << "1. Search" << std::endl;
	std::cout << "0. Exit" << std::endl;
}

void SearchForBookByName(std::string name, std::vector<Book*>& myVector) {
	std::string SearchTerm;
	
	std::cin >> SearchTerm;
	for (auto p : myVector) {
		std::string ElementOfSearch = p->getTitle();
		if (ElementOfSearch.find(SearchTerm) != std::string::npos) {
			std::cout << p->getTitle() << " available copy/copies: " 
				<< p->getQuantity() << std::endl;
		}
	}
}


void displayMenu(std::vector<Book*> &myVector) {
	int Selection;
		do{
			LineWithName("MainMenu");
			MenuOptions();
			line();
			Selection = InputCheckFunction();
			switch (Selection) {
			case 1: // search for book
				DisplaySearchMenu(myVector);
				line();
				break;
			case 2: // add/remove
				DisplayAddRemoveMenu(myVector);
				line();
				break;
			case 3: 
				Restoration(myVector);
				break;
			case 4:
				LineWithName("Save/Load Menu");
				DisplaySaveLoadMenu();
				line();
				int LoadSaveSelection = InputCheckFunction();
				SelectionSaveLoadMenu(myVector, LoadSaveSelection);
				break;
			}
		} while (Selection != 0);

}
