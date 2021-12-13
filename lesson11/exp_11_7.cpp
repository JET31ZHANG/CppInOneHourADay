/*
    Checking for the number of base class Animal instances
    for one instance of platpus
*/
#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal constructor" << endl;
    }

    // sample member
    int age;
};

class Mammal:public Animal
{};

class Bird:public Animal
{};

class Reptile:public Animal
{};

class Platypus final:public Mammal, public Bird, public Reptile
{
public:
    Platypus()
    {
        cout << "Platypus constructor" << endl;
    }
};

int main()
{
    Platypus duckBilledP;

    // uncomment next line to see compile failure
    // age is ambiguous as there are three instances of base Animal
    // duckbilledP.age = 25;
    return 0;
}