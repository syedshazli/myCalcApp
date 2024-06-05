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

void operation::show_subtract() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to subtract? (EX: to subtract 6 from 15 for a result of 9 type '15' '6')";
	std::cin >> x;
	std::cin >> y;
	std::cout << x<< " - " << y  << " is " << x - y;
}
