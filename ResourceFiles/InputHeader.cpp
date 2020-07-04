#include "InputHeader.h"

int InputCheckFunction() {
	std::string InputString = "";
	int OutputInt;
	std::cout << "Please select: ";
	while (true) {
		std::getline(std::cin, InputString);
		std::stringstream myStream(InputString);
		if ((myStream >> OutputInt))
			break;
		std::cout << "Invalid input, please try again" << std::endl;
	}
	return OutputInt;
}
