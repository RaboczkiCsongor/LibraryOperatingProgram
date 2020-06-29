#pragma once
#include <string>
class Book {
	std::string Author;
	std::string Title;
	int Pages;
	std::string Genre;
	int Quantity;
public:
	Book();
	Book(std::string nAuthor, std::string nTitle, int nPages, 
		std::string nGenre, int nQuantity);
	std::string getAuthor();
	void setAuthor(std::string newAuthor);
	std::string getTitle();
	void setTitle(std::string newTitle);
	int getPages();
	void setPages(int newPages);
	std::string getGenre();
	void setGenre(std::string newGenre);
	int getQuantity();
	void setQuantity(int nQuantity);

};
