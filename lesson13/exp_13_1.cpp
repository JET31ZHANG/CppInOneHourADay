/*
    Using dynamic casting to tell whether a Fish object 
    is a Tuna or a Carp
*/
#include <iostream>
using namespace std;

class Fish
{
public:
    virtual void Swim()
    {
        cout << "Fish swims in water" << endl;
    }

    // base class should always have virtual destructor
    virtual ~Fish();
};

class Tuna:public Fish
{
public:
    void Swim()
    {
        cout << "Tuna sims real fast in the sea" << endl;
    }

    void BecameDinner()
    {
        cout << "Tuna became dinner in Sushi" << endl;
    }
};

class Carp:public Fish
{
public:
    void Swim()
    {
        cout << "Carp swims real slow in the lake" << endl;
    }

    void Talk()
    {
        cout << "Carp talked Carp!" << endl;
    }
};

void DetectFishType(Fish* objFish)
{
    Tuna* objTuna = dynamic_cast <Tuna*>(objFish);
    if (objTuna) // check success of cast
    {
        cout << "Detected Tuna, Making Tuna dinner: " << endl;
        objTuna->BecameDinner();
    }

    Carp* objCarp = dynamic_cast <Carp*>(objFish);
    if(objCarp)
    {
        cout << "Detected Carp. Making carp talk: " << endl;
        objCarp->Talk();
    }

    cout << "Verifying type using virtual Fish:Swim: " << endl;
    objFish->Swim();    // calling virtual function Swim
}

int main()
{
    Carp myLunch;
    Tuna myDinner;

    DetectFishType(&myDinner);
    cout << endl;
    DetectFishType(&myLunch);

    return 0;
}
