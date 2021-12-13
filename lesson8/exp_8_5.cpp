/*
    Manuplating data using a pointer and the dereference operator(*)
*/
#include <iostream>
using namespace std;

int main()
{
    int dogsAge = 30;
    cout << "Intitialized dogsAge = " << dogsAge << endl;

    int* pointsToAnAge = &dogsAge;
    cout << "pointsToAnAge points to dogsAge" << endl;

    cout << "Enter an ange for your dog: ";

    // store input at the memory pointed to by pointsToAnAge
    cin >> *pointsToAnAge;

    // Display the address where age is stored
    cout << "Input store at 0x" << hex << pointsToAnAge << endl;

    cout << "Integer dogsAge = " << dec << dogsAge << endl;

    return 0; 
}