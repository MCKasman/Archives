//10_25_passByReference
#include <iostream>
#include <math.h>

using namespace std;
/*
- With pass by reference, the called function accesses the original variables in the calling function, not copies
- The called function is passed the address(es) of the reference variable(s)
- When pass by reference, the called function is able to pass back more than one data item to the calling function: overcome the
limitation of returns, which can pass back at most one item
- What is passed by reference must be a variable (something that has an address), otherwise it won't compile
- Use pass by reference when appropriate: Do not use if function does not need to change the argument, or if function needs to return only one
data item (should use return)
*/

// Must put & for each reference variable, must put & in function header
void convertCoordinates(double angle, double length, double & x, double & y);

int main()
{
    const double PI = 3.14159;

    double myAngle, myLength, xCoord, yCoord;

    cout << "Enter angle and length: " << endl;
    cin >> myAngle >> myLength;
    convertCoordinates(myAngle + (PI/2), myLength, xCoord, yCoord);

    // Allowed to pass an expression (myAngel +(PI/2) when pass by value
    // Allowed to pass only a variable if pass by reference
    cout << "xCoord = " << xCoord << ", yCoord = " << yCoord << endl;
    return 0;
}

// Must put & for each reference variable, must put & in function header
// x and y are aliases for xCord and yCord respectively
void convertCoordinates(double angle, double length, double & x, double & y)
{
    x = length * cos(angle);
    y = length * sin(angle);
}
