/*
    Using the friend keyword to allow an external class
    utility access to private data members
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
private: 
    friend class Utility;
    string name;
    int age;

public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
    }
};

class Untility
{
public:
    static void DisplayAge(const Human& person) 
    {
        // Human::age declared in line 14, cannot access
        cout << person.age << endl; 
    }
};

int main()
{
    Human firstMan("Adam", 25);
    cout << "Accessing private member age via friend class: ";
    Untility::DisplayAge(firstMan);

    return 0;
}