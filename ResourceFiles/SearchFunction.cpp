#include "SearchFunction.h"
void ListAllMenu(std::vector<Book*>& myVector) {
	int idx = 1;
	for (auto p : myVector) {
		std::cout << idx << ". ";
		p->PrintForList();
		idx++;
	}
}

void SearchForBooks(std::vector<Book*>& myVector , int Identifier) {
	std::string searchTerm;
	std::size_t	found;
	switch (Identifier)
	{
	case 3://author
		line();
		std::cout << "Searching for author name: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getAuthor().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		break;
	case 2://title
		line();
		std::cout << "Searching for title: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getTitle().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		break;
	case 1://genre
		line();
		std::cout << "Searching for genre: ";
		std::getline(std::cin, searchTerm);
		for (auto p : myVector) {
			found = p->getAuthor().find(searchTerm);
			if (found != std::string::npos) {
				p->PrintForList();
			}
		}
		line();
		break;
	default:
		line();
		std::cout << "No matches found!";
		break;
		line();
	}
}
