#include "LoadFromFile.h"


void LoadFromFile(std::vector<Book*> &myVector) {
	std::ifstream myFile;
	std::string line;
	std::string Author ="", Title = "", Genre = "";
	int Pages = 0, Quantity = 0;
	int SavePos = 0;
	myFile.open("BookList.txt");
	if (myFile.is_open()) {
		while (!myFile.eof()) {
			std::getline(myFile, line);
			for (int i = 0; i < line.length(); i++) {
				if (line[i] == '\t' && Author == "") {
					Author = line.substr(0, i);
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Title == "") {
					Title = line.substr(SavePos+1, i);
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Pages == 0) {
					std::string s = line.substr(SavePos+1, i);
					std::stringstream converted(s);
					converted >> Pages;
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Genre == "") {
					Genre = line.substr(SavePos + 1, i);
					SavePos = i;
					continue;
				}
				if (line[i] == '\0' && Quantity == 0) {
					std::string s = line.substr(SavePos+1, i);
					std::stringstream converted(s);
					converted >> Quantity;
				}
			}
			myVector.push_back(new Book(Author, Title, Pages, Genre, Quantity));
		}
	}
	myFile.close();
}
