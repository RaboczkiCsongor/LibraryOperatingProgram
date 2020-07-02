#include "AddBook.h"


int InputCheckForAddBook() {
	std::string tempString = "";
	int tempInt;
	while (true) {
		std::cin.clear();
		std::getline(std::cin, tempString);
		std::stringstream myStream(tempString);
		if ((myStream >> tempInt))
			break;
		std::cout << "Invalid input, please try again" << std::endl;
	}
	return tempInt;
}

void AddBook(std::vector<Book*>& myVector) {
	std::string tempAuthor, tempTitle, tempGenre = "";
	int tPages ,tQuantity = 0;
	std::cout << "New books author: ";
	std::getline(std::cin, tempAuthor);
	std::cout << "New books title: ";
	std::getline(std::cin, tempTitle);
	std::cout << "New books page number: ";
	tPages = InputCheckForAddBook();
	std::cout << "New books genre: ";
	std::getline(std::cin, tempGenre);
	std::cout << "New books quantity: ";
	tQuantity = InputCheckForAddBook();

	if (tempAuthor != "" && tempTitle != "" && tempGenre != "" && tPages != 0 && tQuantity != 0) {
		myVector.push_back(new Book(tempAuthor, tempTitle, tPages, tempGenre, tQuantity));
	}
	else
		std::cout << "Error in adding new book!";
}
