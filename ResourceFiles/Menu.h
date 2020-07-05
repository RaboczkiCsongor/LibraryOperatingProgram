#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "Book.h"

#include "SaveLoadMenu.h"
#include "SearchMenu.h"
#include "AddRemoveMenu.h"
#include "Restoration.h"
#include "InputHeader.h"
#include "line.h"

void SearchForBookByName(std::string name, std::vector<Book*> &myVector);
void displayMenu(std::vector<Book*> &myVector);
void MenuOptions();
void ListAllMenu(std::vector<Book*> &myVector);
