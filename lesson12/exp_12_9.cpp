/*
    Implementing subscript operator [] in class MyString to
    allow random access to characters contained in MyString::buffer
*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class MyString
{
private:
    char* buffer;

    // private default constructor
    MyString(){}
public:
    // constructor
    MyString(const char* initialInput)
    {
        if(initialInput != NULL)
        {
            buffer = new char [strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        }
        else
        {
            buffer = NULL;
        }
    }
    // Copy constructor insert from Listing 9.9 here
    MyString(const MyString& copySource);

    // Copy assignment operator: insert from Listing 12.8 here
    MyString& operator= (const MyString& copySource);

    const char& operator[] (int index) const 
    {
        if(index < GetLength())
        {
            return buffer[index];
        }
    }

    // Destructor
    ~MyString()
    {
        if(buffer != NULL)
        {
            delete[] buffer;
        }
    }

    int GetLength() const
    {
        return strlen(buffer);
    }

    operator const char*()
    {
        return buffer;
    }
};

int main()
{
    cout << "Type a statement: ";
    string strInput;
    getline(cin, strInput);
    MyString youSaid(strInput.c_str());

    cout << "Using operator[] for displaying your input:" << endl;
    for(int index = 0; index < youSaid.GetLength(); ++index)
    {
        cout << youSaid[index] << " ";
    }
    cout << endl;

    cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
    int index = 0;
    cin >> index;
    cout << "Input character at zero-based position: " << index;
    cout << " is: " << youSaid[index] << endl;

    return 0;
}

// hello toc