/*
    Using const reference to ensure that the calling function
    cannot modify a value sent by reference
*/
#include <iostream>
using namespace std;

void GetSquare (const int& number, int& result)
{
    result = number * number;
}

int main()
{
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    int square = 0;
    GetSquare(number, square);
    cout << number << "^2 = " << square << endl;

    return 0;
}