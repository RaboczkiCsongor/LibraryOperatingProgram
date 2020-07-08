#pragma once
#include "Book.h"
#include <fstream>
#include <string>
#include <vector>

void SaveToFile(std::vector<Book*> myVector,std::string FileName);
