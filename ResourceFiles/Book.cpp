#include "Book.h"

Book::Book() : Author("Error"), Title("Error"), Pages(0), Genre("None"), Quantity(0) {}
Book::Book(std::string nAuthor, std::string nTitle,
	int nPages , std::string nGenre, 
	int nQuantity) :
	Author(nAuthor),
	Title(nTitle), 
	Pages(nPages),
	Genre(nGenre),
	Quantity(nQuantity){}
std::string Book::getAuthor() {
	return this->Author;
}
void Book::setAuthor(std::string newAuthor) {
	this->Author = newAuthor;
}
std::string Book::getTitle() {
	return this->Title;
}
void Book::setTitle(std::string newTitle) {
	this->Title = newTitle;
}
int Book::getPages() {
	return this->Pages;
}
void Book::setPages(int newPages) {
	this->Pages = newPages;
}
std::string Book::getGenre() {
	return this->Genre;
}
void Book::setGenre(std::string newGenre) {
	this->Genre = newGenre;
}
int Book::getQuantity() {
	return this->Quantity;
}
void Book::setQuantity(int nQuantity) {
	this->Quantity = nQuantity;
}

void Book::PrintForList() {
	std::cout << this->getAuthor() << ": " << this->getTitle() << " Available: " << this->getQuantity() << std::endl;
}
