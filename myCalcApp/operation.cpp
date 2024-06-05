#include "operation.h"
#include <iostream>

void operation::show_add() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to add?";
	std::cin >> x;
	std::cin >> y;
	std::cout << "Your sum is " << x + y;
}
