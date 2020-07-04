#include "line.h"

void line() {
	for (int i = 0; i < MenuWidth; i++)
		std::cout << "-";
	std::cout << std::endl;
}

void LineWithName(std::string MenuName) {
	for (int i = 0; i < MenuWidth / 2; i++) {
		std::cout << "-";
	 }
	std::cout << MenuName;
	for (int i = 0; i < MenuWidth / 2; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
}
