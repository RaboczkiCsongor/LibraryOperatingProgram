#include "Menu.h"
void line() {
	for (int i = 0; i < MenuWidth; i++)
		std::cout << "-";
	std::cout <<std::endl;
}
void MenuOptions() {
	std::cout << "5. Save/Load" << std::endl;
	std::cout << "4. Remove a book" << std::endl;
	std::cout << "3. Add a new book" << std::endl;
	std::cout << "2. Search" << std::endl;
	std::cout << "1. List all books"<< std::endl;
	std::cout << "0. Exit" << std::endl;
}
int InputCheck() {
	std::string InputString = "";
	int OutputInt;
	std::cout << "Please select: ";
	while (true) {
		std::getline(std::cin, InputString);
		std::stringstream myStream(InputString);
		if ((myStream >> OutputInt))
			break;
		std::cout << "Invalid input, please try again" << std::endl;
	}
	return OutputInt;
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
void ListAllMenu(std::vector<Book*>& myVector) {
	int idx = 1;
	for (auto p : myVector) {
		std::cout << idx << ". ";
		p->PrintForList();
		idx++;
	}
}

void RemoveBook(std::vector<Book*>& myVector) {
	int removeidx;
	ListAllMenu(myVector);
	std::cout << "Please provide the ID number of book you would like to remove from inventory" << std::endl;
	removeidx = InputCheck() -1;
	delete myVector[removeidx];
	//myVector.erase(myVector.begin() + removeidx);
}

void displayMenu(std::vector<Book*> &myVector) {
	int Selection;
		do{
			line();
			MenuOptions();
			line();
			Selection = InputCheck();
			switch (Selection) {
			case 1: // list all
				ListAllMenu(myVector);
				break;
			case 2: // search for book
				break;
			case 3: // add book
				AddBook(myVector);
				break;
			case 4: //remove book
				RemoveBook(myVector);
				break;
			case 5:
				line();
				DisplaySaveLoadMenu();
				line();
				int LoadSaveSelection = InputCheck();
				SelectionSaveLoadMenu(myVector, LoadSaveSelection);
				break;
			}
		} while (Selection != 0);

}
