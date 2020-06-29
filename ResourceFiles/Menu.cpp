#include "Menu.h"
void line() {
	for (int i = 0; i < MenuWidth; i++)
		std::cout << "-";
	std::cout <<std::endl;
}
void MenuOptions() {
	std::cout << "6. Load from file" << std::endl;
	std::cout << "5. Save to file" << std::endl;
	std::cout << "4. Remove a book" << std::endl;
	std::cout << "3. Add a book" << std::endl;
	std::cout << "2. Search" << std::endl;
	std::cout << "1. List all books"<< std::endl;
	std::cout << "0. Exit" << std::endl;
}
int InputCheck() {
	std::string Selection = "";
	int SelectionNum;
	std::cout << "Please select: ";
	while (true) {
		std::getline(std::cin, Selection);
		std::stringstream myStream(Selection);
		if ((myStream >> SelectionNum))
			break;
		std::cout << "Invalid input, please try again" << std::endl;
	}
	
	return SelectionNum;
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
			line();
			MenuOptions();
			line();
			Selection = InputCheck();
			switch (Selection) {
			case 1: // list all
				for (auto p : myVector) {
					std::cout << p->getAuthor() << std::endl;
					std::cout << p->getTitle() << std::endl;
				}
				break;
			case 2: // search for book
				break;
			case 3: // add book
				break;
			case 4: //remove book
				break;
			case 5: 
				SaveToFile(myVector);
				break;
			case 6:
				LoadFromFile(myVector);
				break;
			}
		} while (Selection != 0);

}
