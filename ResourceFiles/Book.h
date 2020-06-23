#pragma once
#include <string>
class Book {
	std::string Name;
	int Pages;
public:
	Book();
	Book(std::string nName, int nPages);
	std::string getName();
};
