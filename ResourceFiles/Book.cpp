#include "Book.h"

Book::Book() : Name("Error"), Pages(0) {}
Book::Book(std::string nName, int nPages) : Name(nName), Pages(nPages) {}
std::string Book::getName() {
	return Name;
}