/*
    Using recursive functions to calculate a number
    in the fibonacci series
*/
#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex) 
{
    if (fibIndex < 2)
    {
        return fibIndex;
    } else {
        return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
    }
}

int main()
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int index = 0;
    cin >> index;

    cout << "Fibonacci number is: " << GetFibNumber(index) << endl;
    return 0;
}

