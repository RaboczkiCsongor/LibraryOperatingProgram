#include "book.h"

//Book::Book() : Name("Error"), Pages(0) {}
Book::Book(std::string NewName, int NewPages) : Name(NewName), Pages(NewPages) {}
void Book::printName() {
	std::cout << this->Name << std::endl;
}