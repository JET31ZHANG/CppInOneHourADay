/*
    A simple inheitance hierarchy demonstrated 
    by the piscean world
*/

#include <iostream>
using namespace std;
 
class Fish
{
public:
    bool isFrshWaterFish;

    void Swim()
    {
        if(isFrshWaterFish)
        {
            cout << "Swims is lake" << endl;
        }
        else 
        {
            cout << "Swims is sea" << endl;
        }
    }
};

class Tuna: public Fish
{
public:
    Tuna()
    {
        isFrshWaterFish = false;
    }
};

class Carp: public Fish
{
public:
    Carp()
    {
        isFrshWaterFish = true;
    }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food:" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    return 0;
}
