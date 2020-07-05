#include "AddRemoveMenu.h"


void RemoveBook(std::vector<Book*>& myVector) {
	int removeidx;
	ListAllMenu(myVector);
	std::cout << "Please provide the ID number of book you would like to remove from inventory (0 to exit)" << std::endl;
	removeidx = InputCheckFunction() - 1;
	if (removeidx == -1) {
		return;
	}
	else
		delete myVector[removeidx];

}

void AddNumberOfBooks(std::vector<Book*>& myVector) {
	int addidx;
	std::string InputAmount;
	int OutputInt;
	ListAllMenu(myVector);
	std::cout << "Please provide the ID number of book you would like to add to (0 to exit):" << std::endl;
	addidx = InputCheckFunction() - 1;
	if (addidx == -1) {
		return;
	}
	else {
		std::cout << "How many books you would like to add: " << std::endl;
		while (true) {
			std::getline(std::cin, InputAmount);
			std::stringstream myStream(InputAmount);
			if ((myStream >> OutputInt))
				break;
			std::cout << "Invalid input, please try again" << std::endl;
		}
		myVector[addidx]->setQuantity(OutputInt+myVector[addidx]->getQuantity());
		myVector[addidx]->PrintForList();
	}

}

void DisplayAddRemoveMenu(std::vector<Book*>& myVector) {
	int selector;
	do {
		LineWithName("Add / Remove Menu");
		std::cout << "3. Remove book from inventory" << std::endl;
		std::cout << "2. Add to existing book" << std::endl;
		std::cout << "1. Add new book to inventory" << std::endl;
		std::cout << "0. Exit" << std::endl;
		line();
		selector = InputCheckFunction();
		switch (selector) {
		case 3: //Remove
			RemoveBook(myVector);
			break;
		case 2:
			AddNumberOfBooks(myVector);
			break;
		case 1: AddBook(myVector);
			break;
		}
	} while (selector != 0);
	
}
