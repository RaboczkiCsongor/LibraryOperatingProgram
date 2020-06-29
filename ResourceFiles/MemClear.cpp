#include "MemClear.h"

void ClearMemory(std::vector<Book*> myVector){
	for (auto p : myVector) {
		delete p;
	}
	myVector.clear();
}
