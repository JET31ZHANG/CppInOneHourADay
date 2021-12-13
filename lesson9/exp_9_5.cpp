/*
    A class with overloaded constructor(s) and no default constructor
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string humansName, int HumansAge)
    {
        name = humansName;
        age = HumansAge;
        cout << "Overloaded constructor creates " << name;
        cout << " of age " << age << endl;
    }

    void IntroduceSelf()
    {
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main()
{
    Human firstMan("Adam", 25);
    Human firsWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firsWoman.IntroduceSelf();

    return 0;
}