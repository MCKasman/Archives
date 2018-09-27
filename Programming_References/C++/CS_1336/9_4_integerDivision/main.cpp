//9_4_integerDivision
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;
/*
- When both numerator and denominator are integers, integer division is performed
- The fractional part of the result is dropped (this is NOT rounding), and the results
- Modulus operator requires both operands to be integers
*/

int main()
{
    cout << "13/5 = " << 13/5 << endl; // integer division
    cout << "13.0/5 = " << 13.0/5 << endl; // no integer division
    cout << "13/5.0 = " << 13/5.0 << endl; // no integer division
    cout << "13.0/5.0 = " << 13.0/5.0 << endl; // no integer division

    int myInt1 = 91 , myInt2 = 7;
    cout << "myInt1/myInt2 = " << myInt1/myInt2 << endl;

    int myDouble1 = 91.0 , myDouble2 = 7.0;
    cout << "myDouble1/myInt1 = " << myDouble1/myInt1 << endl;
    cout << "myInt1/myDouble2 = " << myInt1/myDouble2 << endl;

    cout << "myInt1/7.0 = " << myInt1/7.0 << endl;

    // modulus
    cout << "13%5 = " << 13%5 << endl;
    // cout << "13.0 % 5 = " << 13.0%5 << endl; <-- Won't compile, integers not all in correct format (both operands must be integers)

    // Example use of integer division and modulus
    int minutes;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << minutes << " minutes is equal to " << minutes/60 << " hours and " << minutes%60 << " minutes" << endl;

    return 0;
}
