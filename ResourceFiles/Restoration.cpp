#include "Restoration.h"


void Restoration(std::vector <Book*>& myVector) {
	int idx;
	std::string InputAmount;
	int OutputInt;
	ListAllMenu(myVector);
	std::cout << "Please provide the ID number of book you would like to restore (0 to exit):" << std::endl;
	idx = InputCheckFunction() - 1;
	if (idx == -1) {
		return;
	}
	std::cout << "|";

	using namespace std::chrono_literals;

	for (int i = 0; i < 10; i++) {
		std::cout << "#";
		std::this_thread::sleep_for(1s);
	}
	myVector[idx]->setQuantity(myVector[idx]->getQuantity() + 1);
	std::cout << "|" << std::endl;
}
