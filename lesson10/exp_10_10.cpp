/*
    Using multiple inheritance to Model a Platypus that is part
    mmammal, part bird, and part reptile
*/

#include <iostream>
using namespace std;

class Mammal
{
public:
    void FeedBayMilk()
    {
        cout << "Mammal: Baby says glug!" << endl;
    }
};

class Reptile
{
public:
    void SpitVenom()
    {
        cout << "Reptile: Shoo enemy! Spits venom!" << endl;
    }
};

class Bird
{
public:
    void LayEggs()
    {
        cout << "Bird: laid my eggs, am lighter now!" << endl;
    }
};

class Platpus: public Mammal, public Bird, public Reptile
{
public:
    void Swim()
    {
        cout << "Platpus: Voila, I can swim!" << endl;
    }
};

int main()
{
    Platpus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBayMilk();
    realFreak.SpitVenom();
    realFreak.Swim();

    return 0;
}