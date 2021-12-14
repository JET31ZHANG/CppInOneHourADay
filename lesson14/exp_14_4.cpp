/*
    A template class with a pair of member attributes
*/
#include <iostream>
using namespace std;

// template with default params: int & double
template<typename T1 = int, typename T2 = double>
class HoldsPair
{
private:
    T1 value1;
    T2 value2;
public:
    HoldsPair(const T1& val1, const T2& val2) // constructor
        : value1(val1), value2(val2){}
    
    // Accessor functions
    const T1 & GetFirstValue() const
    {
        return value1;
    }
    const T2& GetSecondValue() const
    {
        return value2;
    }
};

int main()
{
    HoldsPair<> pairIntDb1(300, 10.09);
    HoldsPair<short, const char*> pairShortStr(25, "Learn templates, Love C++");

    cout << "The first object contains -" << endl;
    cout << "Value 1: " << pairIntDb1.GetFirstValue() << endl;
    cout << "Value 2: " << pairIntDb1.GetSecondValue() << endl;

    cout << "The second object contains -" << endl;
    cout << "Value 1: " << pairShortStr.GetFirstValue() << endl;
    cout << "Value 2: " << pairShortStr.GetSecondValue() << endl;

    return 0;
}