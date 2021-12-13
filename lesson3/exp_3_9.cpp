/*
    Using enumerated values to indicate cardinal wind directions
*/
#include <iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections withDirection = South;
    cout << "Variable windDirection = " << withDirection << endl;

    return 0;
}