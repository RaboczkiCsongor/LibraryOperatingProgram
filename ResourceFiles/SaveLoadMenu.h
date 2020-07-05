#pragma once
#include <iostream>
#include <vector>
#include "SaveToFile.h"
#include "LoadFromFile.h"

void DisplaySaveLoadMenu();
void SelectionSaveLoadMenu(std::vector < Book*>& myVector, int selection);

