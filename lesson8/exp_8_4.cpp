/* 
    Demonstrating the use of dereference operator(*) 
    to access integer values
*/
#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int dogsAge = 9;

    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;

    int* pointsToInt = &age;
    cout << "pointsToInt points to age" << endl;

    // Display the value of pointer
    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;

    // Display the value at the pointed
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;

    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now" << endl;

    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
    cout << "pointsToInt = " << dec << *pointsToInt << endl;

    return 0; 
}