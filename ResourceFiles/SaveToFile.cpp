#include "SaveToFile.h"
void SaveToFile(std::vector<Book*> myVector, std::string FileName){
	std::ofstream MyFile(FileName);
	for (auto p : myVector) {
		MyFile << p->getAuthor();
		MyFile << "\t";
		MyFile << p->getTitle();
		MyFile << "\t";
		MyFile << p->getPages();
		MyFile << "\t";
		MyFile << p->getGenre();
		MyFile << "\t";
		MyFile << p->getQuantity();
		MyFile << std::endl;
	}
	MyFile.close();
}
