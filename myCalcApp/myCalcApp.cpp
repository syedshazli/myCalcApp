// myCalcApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    /*
    * first, let's make a simple calculator. From there, we can decide if we want to expand
    * Here's the thing about a calculator. You should be able to complete any amount of operations.
    * 
    * What operations would you like to complete? add for a for add, s for subtract, m for multiply, d for divide,
                                                        r for remainder, q for quit. etc"

    * IF ITS A VALID LETTER, USER GIVES A OPERATION... ELSE WE ASK TO TRY AGAIN
    * 
    * BASED ON THE OPERATION.... (MAY NEED MULTIPLE CLASSES. OR INHERITANCE PATTERN LMAO)
    *   Subtract. Give me the two numbers you'd like to subtract. Ex: 5 10 will subtract 5 from 10, and I will output 5
    *   Multiply: Give me the two numbers you'd like to multiply
    *   Add: Give me the numbers you'd like to add
    *   Divide, give me the numbers you'd like to divide from each other (same input as subtraction) 
    *   Remainder: Give me the two numbers and I'll find the remainder (same input as subtraction) (could be polymorphism w/divide class)
    * 
    *   Give the user the final output based on the operation. 
    *       EX: Your result is 5. Would you like to (c)lear, (a)dd, (s)ubtract, (m)ultiply, (d)ivide, (r)emainder, or quit?
    * 
    *   I think that's all. Push to main 
    */

    std::cout << "Hi!";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
