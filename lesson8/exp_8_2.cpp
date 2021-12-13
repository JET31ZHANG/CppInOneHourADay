/* Demonstrating the declaration and initialization of a pointer */
#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int* pointsToInt = &age; // pointer initialized to &age

    // Display the value of pointer
    cout << "integer age is at: 0x" << hex << pointsToInt << endl;

    return 0; 
}