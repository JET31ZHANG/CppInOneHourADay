/*
    Using Logical NOT and Logical OR operators 
    to help you decide if you can buy that dream car
*/ 
#include <iostream>
using namespace std;
int main()
{
    cout << "Answer question with 0 or 1" << endl;
    cout << "Is there a discount on your favorite car? ";
    bool onDiscount = false;
    cin >> onDiscount;

    cout << "Did you get a fantastic bonus? ";
    bool fantasticBonus = false;
    cin >> fantasticBonus;

    if(onDiscount || fantasticBonus) {
        cout << "Congratulations, you can buy that car!" << endl;
    } else {
        cout << "Sorry, wait a while is a good idea." << endl;
    }

    if(!onDiscount) {
        cout << "Car not on discount" << endl;
    }

    return 0;
}