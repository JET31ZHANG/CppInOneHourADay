/* using global variable */
#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplycationResult = 0;

void MultiplyNumbers()
{
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Multiply two numbers, store result in a variable
    multiplycationResult = firstNumber * secondNumber;

    // Display result 
    cout << "Display from MultiplyNumbers(): ";
    cout << firstNumber << " * " << secondNumber;
    cout << " = " << multiplycationResult << endl;
}

int main() 
{
    cout << "This program will help you multiply two numbers" << endl;

    // Call the function that does all the work
    MultiplyNumbers();

    cout << "Displaying from main(): ";

    // This line will now compile and work;
    cout << firstNumber << " * " << secondNumber;
    cout << " = " << multiplycationResult << endl;

    return 0;
}