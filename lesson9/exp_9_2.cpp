/*
    A model of class Human where the true age is abstracted 
    from the user and a younger age is reported
*/
#include <iostream>
using namespace std;

class Human
{
private:
    // Private memberL data:
    int age;

public:
    void SetAge(int inputAge)
    {
        age = inputAge;
    }

    // Human lies about his / her age (if over 30)
    int GetAge()
    {
        if(age > 30)
        {
            return (age - 2);
        } else {
            return age;
        }
    }
};

int main()
{
    Human firstMan;
    firstMan.SetAge(35);

    Human firstWoman;
    firstWoman.SetAge(22);

    cout << "Age of firstMan " << firstMan.GetAge() << endl;
    cout << "Age of firstWoman " << firstWoman.GetAge() << endl;

    return 0;
}