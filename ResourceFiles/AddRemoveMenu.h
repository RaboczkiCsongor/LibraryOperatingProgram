#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Book.h"
#include "line.h"
#include "InputHeader.h"
#include "SearchFunction.h"
#include "AddBook.h"



void RemoveBook(std::vector<Book*>& myVector);
void DisplayAddRemoveMenu(std::vector<Book*>& myVector);

