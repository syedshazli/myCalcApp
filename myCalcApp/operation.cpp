#include "operation.h"
#include <iostream>

void operation::show_add() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to add?";
	std::cin >> x;
	std::cin >> y;
	std::cout << "The sum of " <<x <<" + " <<y<< " is " << x + y;
}

void operation::show_subtract() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to subtract? (EX: to subtract 6 from 15 for a result of 9 type '15' '6')";
	std::cin >> x;
	std::cin >> y;
	std::cout << x<< " - " << y  << " is " << x - y;
}

void operation::show_multiply() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to multiply?";
	std::cin >> x;
	std::cin >> y;
	std::cout << "Your product of " <<x << " and " <<y << " is " << x*y;
}

void operation::show_divide(){
	//make sure no 0's in divisor
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to divide? (EX: to divide 3 from 15 for a result of 5 type '15' '3')";
	std::cin >> x;
	std::cin >> y;
	while (y == 0) {
		std::cout << "No division by 0! Try again";
		std::cin >> x;
		std::cin >> y;
		//create functionality. Maybe while loop inside whole function which can be helpful for later
	}

	std::cout << "Your quotient of " <<x<<" divided by " <<y <<" is " << x/y;
}


void operation::show_remainder() {
	//make sure no 0's in divisor
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to find a remainder for? (EX: to divide 6 from 15 for a remainder of 3 type '15' '6')";
	std::cin >> x;
	std::cin >> y;

	while(y == 0){
		std::cout << "No division by 0! Try again";
		std::cin >> x;
		std::cin >> y;
	}

	float z = remainder(x, y); //remainder function
	std::cout << "The remainder after dividing " <<x<<" from " <<y << " is " << z;

}

void show_exponent() {
	float x = 0;
	float y = 0;
	std::cout << "What two numbers would you like to use for calculating an exponent? (EX: to raise 2 to the power 3 to get a result of 8, type '2' '3')";
	std::cin >> x;
	std::cin >> y;
}
