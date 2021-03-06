/*
    Using std::string to initialize, store user input,
    copy, concatenate and determine the length of a string
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greetString ("Hello std::string!");
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of Concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;
}