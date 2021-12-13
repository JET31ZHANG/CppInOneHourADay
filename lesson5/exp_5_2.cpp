// Demonstrate the difference bewteen postfix and prefix operators
#include <iostream>
using namespace std;

int main()
{
    int startValue = 101;
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    startValue = 101; // Reset
    int postfixDecrement = startValue--;
    cout << "Resul of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Decrement, startValue = " << startValue << endl;

    startValue = 101; // Reset
    int prefixDrecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDrecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;

    return 0;
}