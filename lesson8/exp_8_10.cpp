// Use the const keyword in calculating the area of a circle
#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, // const pointer to const data
            const double* const ptrRadius, // i.e. no changes allowed
            double* const prtArea) // can change data pointed to
{
    // check pointers for validity before using!
    if (ptrPi && ptrRadius && prtArea)
    {
        *prtArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    }
}

int main()
{
    const double Pi = 3.1416;
    cout << "Enter radius of circle: ";
    double radius = 0;
    cin >> radius;

    double area = 0;
    CalcArea(&Pi, &radius, &area);
    cout << "Area is = " << area << endl;
    
    return 0;
}