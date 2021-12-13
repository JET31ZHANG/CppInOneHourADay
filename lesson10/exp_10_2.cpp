/*
    A better class Fish using the protected keyword
    to express its member attribute only to the derived classes
*/
#include <iostream>
using namespace std;

class Fish
{
protected:
    bool isFreshWaterFish; // accessible only to derived classes

public:
    void Swim()
    {
        if(isFreshWaterFish)
        {
            cout << "Swims in lake" << endl;
        }
        else 
        {
            cout << "Swims in sea" << endl;
        }
    }
};

class Tuna: public Fish
{
public:
    Tuna()
    {
        isFreshWaterFish = false; // set protected member in base
    }
};

class Carp: public Fish
{
public:
    Carp()
    {
        isFreshWaterFish = false;
    }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food" << endl;

    cout << "Lunch: ";
    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    // uncomment line below to see that protected member
    // are not accessible from outside the class hierarchy
    // myLunch.isFreshWaterFish = false

    return 0;
}