// myCalcApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Main is our driver class that asks the user about initial operation input

#include <iostream>

int main()
{
    
    /*
   
    * 
    *   I think that's all. Push to main 
    * 
    *  Day two Goals:
    *   Learn more about OOP in C++
    *   Implement simple calculator interface
    *       Do this using class inheritance and things of that nature
    *           let's see where it takes us!
    * 
    * 
    */
    char input;
    std::cout << "Hi, welcome to Syed Shazli's calculator!\n What operation would you like to complete? Type 'a' for addition, 's' for subtraction, 'm' for multiplication, 'd' for division, and 'r' for remiander."  ;
    std::cin >> input;
    bool flag = true;
    //bug here. It fails for a valid input the first time and additionally if you try a valid input second time it breaks
    while (flag == true) {
        if (input != 'a' && input != 's' && input != 'm' && input != 'd' && input != 'r') {
            std::cout << "That is not a valid operation, please try again!";
            std::cin >> input;
        }
        else { 
            std::cout << "requested valid operation. loading....";
            flag = false; 
        }
        
    } //end of while, obtained valid user input
    


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