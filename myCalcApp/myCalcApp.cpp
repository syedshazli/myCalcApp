// myCalcApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Main is our driver class that asks the user about initial operation input

#include <iostream>
#include "operation.h"
using namespace std;



int main()
{
    
    /*
    * 
    *   I think that's all. Push to main 
    * 
    *  Day Three Goals:
    *   Learn more about OOP in C++
    *   Implement simple calculator interface
    *       Do this using class inheritance and things of that nature
    *           let's see where it takes us!
    * 
    * Step 3: After building the simple interface, try implementing an API in the project as well
    *  Do we want to first make a GUI or an API? I think including the API earlier might be better, more research is needed
    * 
    * 
    */
    char input;
    std::cout << "Hi, welcome to Syed Shazli's calculator!\n What operation would you like to complete? Type 'a' for addition, 's' for subtraction, 'm' for multiplication, 'd' for division, and 'r' for remiander."  ;
    std::cin >> input;
    bool flag = true;
   
    while (flag == true) {
        if (input != 'a' && input != 's' && input != 'm' && input != 'd' && input != 'r') {
            std::cout << "That is not a valid operation, please try again!";
            std::cin >> input;
        }
        else { 
            flag = false; 
        }
        
    } //end of while, obtained valid user input 
    

    //Switch statement here that says "You selected the X operation, loading..."
        //then we send this to the specific class
    switch (input) {
    case('a'):
        std::cout << "You selected the addition operation! Loading...";
        //ask for two numbers, create specific object
        operation ADD;
        ADD.show_add();
        break;

    case('s'):
        std::cout << "You selected the subtraction operation! Loading...";
       // Subtract minus;
        operation SUBTRACT;
        SUBTRACT.show_subtract();
        break;

    case('m'):
        std::cout << "You selected the multiplication operation! Loading...";
        //Multiply mult;
        break;

    case('d'):
        std::cout << "You selected the division operation! Loading...";
       // Divide div
        break;

    case('r'):
        std::cout << "You selected the remainder operation! Loading...";
       // Remainder rem;
        break;

        //add mult, div, and mod
    }
    

    //operation(input); 
    // will be how we call the function Im assuming
        //also, whats the difference in project--> add new class and project --> add new item?

} //end of main, move on to class structure






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


