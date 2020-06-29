#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Book.h"

constexpr auto MenuWidth = 15;

void line();
void displayMenu(std::vector<Book*> &myVector);
void MenuOptions();

