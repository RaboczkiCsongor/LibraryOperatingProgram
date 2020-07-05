#include "SearchFunction.h"
void ListAllMenu(std::vector<Book*>& myVector) {
	int idx = 1;
	std::cout << "All books in inventory: " << std::endl;
	for (auto p : myVector) {
		std::cout << idx << ". ";
		p->PrintForList();
		idx++;
	}
	std::cout << std::endl;
}

void SearchForBooks(std::vector<Book*>& myVector , int Identifier) {
	std::string searchTerm;
	std::size_t	found;
	switch (Identifier)
	{
	case 3://author
		line();
		std::cout << "List of books, based on Author: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getAuthor().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		std::cout << std::endl;
		break;
	case 2://title
		line();
		std::cout << "List of books, based on title: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getTitle().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		std::cout << std::endl;
		break;
	case 1://genre
		line();
		std::cout << "List of books, based on genre: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getAuthor().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		std::cout << std::endl;
		break;
	default:
		line();
		std::cout << "No matches found!";
		break;
		line();
		std::cout << std::endl;
	}
}
