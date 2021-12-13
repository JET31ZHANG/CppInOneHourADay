/*
    Using sizeof to determine the number of bytes occupied by
    an array of 100 integers, and that by each element therein
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Use sizeof to determin memmory used by arrays" << endl;
    int myNumbers[100] = {0};
    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

    return 0;
}