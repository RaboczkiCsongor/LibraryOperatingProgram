#pragma once
#include <iostream>
#include <string>

class Book {
	std::string Name;
	int Pages;
public:
	Book(std::string Name, int Pages);
	void printName();
};