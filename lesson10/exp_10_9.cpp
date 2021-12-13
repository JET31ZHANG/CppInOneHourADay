/*
    class RaceCar that derives from class Car that derives 
    from class Motor using protected inheritance
*/
#include <iostream>
using namespace std;

class Motor
{
public:
    void SwitchIgnition()
    {
        cout << "Ignition ON" << endl;
    }
    void PumpFuel()
    {
        cout << "Fuel in cylinders" << endl;
    }
    void FireCylinders()
    {
        cout << "Vrooom" << endl;
    }
};

class Car: protected Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

class RaceCar: protected Car
{
public:
    void Move()
    {
        SwitchIgnition();   // RaceCar has access to member of
        PumpFuel();         // base Motor to "protected" inheritance
        FireCylinders();    // between RaceCar & Car, Car & Motor
        FireCylinders();
        FireCylinders();
    }
};

int main()
{
    RaceCar myDreamCar;
    myDreamCar.Move();

    return 0;
}