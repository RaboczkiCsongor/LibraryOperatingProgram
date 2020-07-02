#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Book.h"
#include "SaveLoadMenu.h"
#include "AddBook.h"
constexpr auto MenuWidth = 15;

void SearchForBookByName(std::string name, std::vector<Book*> &myVector);
void line();
void displayMenu(std::vector<Book*> &myVector);
void MenuOptions();
void ListAllMenu(std::vector<Book*> &myVector);
