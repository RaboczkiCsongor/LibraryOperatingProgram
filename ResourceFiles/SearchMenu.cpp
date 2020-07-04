#include "SearchMenu.h"

void DisplaySearchMenu(std::vector<Book*>& myVector) {
	int selector;
	do {
		LineWithName("Search menu");
		std::cout << "4. List all books" << std::endl;
		std::cout << "3. Search for Author" << std::endl;
		std::cout << "2. Search for Title" << std::endl;
		std::cout << "1. Search for Genre" << std::endl;
		std::cout << "0. Back" << std::endl;
		line();
		selector = InputCheckFunction();
		switch (selector) {
		case 1: // Author
			SearchForBooks(myVector, selector);
			break;
		case 2: // Title
			SearchForBooks(myVector, selector);
			break;
		case 3: // Genre
			SearchForBooks(myVector, selector);
			break;
		case 4: 
			ListAllMenu(myVector);
		}
	} while (selector != 0);
}
