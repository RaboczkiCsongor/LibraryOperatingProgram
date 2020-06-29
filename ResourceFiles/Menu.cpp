#include "Menu.h"
void line() {
	for (int i = 0; i < MenuWidth; i++)
		std::cout << "-";
	std::cout <<std::endl;
}
void MenuOptions() {
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
int SearchForBook(std::string) {

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
					std::cout << p->getName() << std::endl;
				}
				break;
			case 2: // search for book
				break;
			case 3: // add book
				break;
			case 4: //remove book
				break;
			}
		} while (Selection != 0);

}
