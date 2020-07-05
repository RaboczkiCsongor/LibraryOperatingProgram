#include "LoadFromFile.h"


void LoadFromFile(std::vector<Book*> &myVector, std::string FileName) {
	std::ifstream myFile;
	std::string line;
	myFile.open(FileName);
	if (myFile.is_open()) {
		while (!myFile.eof()) {
			std::getline(myFile, line);
			if (line == "") {
				break;
			}
			std::string Author = "", Title = "", Genre = "";
			int Pages = 0, Quantity = 0;
			int SavePos = 0;
			for (int i = 0; i < line.length(); i++) {

				if (line[i] == '\t' && Author == "") {
					Author = line.substr(0, i);
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Title == "") {
					Title = line.substr(SavePos+1, i-SavePos-1);
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Pages == 0) {
					std::string s = line.substr(SavePos+1, i - SavePos);
					std::stringstream converted(s);
					converted >> Pages;
					SavePos = i;
					continue;
				}
				if (line[i] == '\t' && Genre == "") {
					Genre = line.substr(SavePos + 1, i - SavePos-1);
					SavePos = i;
					continue;
				}
				if (Quantity == 0 && Genre != "") {
					std::string s = line.substr(SavePos+1, line.length());
					std::stringstream converted(s);
					converted >> Quantity;
				}
			}
			myVector.push_back(new Book(Author, Title, Pages, Genre, Quantity));
		}
	}
	myFile.close();
}
