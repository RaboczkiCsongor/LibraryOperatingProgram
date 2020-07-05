#pragma once
#include "Book.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void LoadFromFile(std::vector<Book*> &myVector, std::string FileName);
