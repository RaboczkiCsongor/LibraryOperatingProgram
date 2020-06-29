#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Book.h"
#include "SaveToFile.h"
#include "LoadFromFile.h"
constexpr auto MenuWidth = 15;

void SearchForBookByName(std::string name, std::vector<Book*> &myVector);
void line();
void displayMenu(std::vector<Book*> &myVector);
void MenuOptions();

