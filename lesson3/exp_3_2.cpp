/*
    Demonstrating the scope of the variables
*/
#include <iostream>
using namespace std;

void MultiplyNumbers()
{
    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    // Multiply two numbers, store result in a variable
    int multiplycationResult = firstNumber * secondNumber;
    
    // Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplycationResult << endl;
}

int main() 
{
    cout << "This program will help you multiply two numbers" << endl;
    
    // Call the function that does all the work
    MultiplyNumbers();
    
    return 0;
}