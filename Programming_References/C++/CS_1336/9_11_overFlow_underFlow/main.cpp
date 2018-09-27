// 9_11_overFlow_underFlow
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;
/*
If you go outside the range of a variable, something unpredictable  will happen.
Overflow: exceed the max value
Underflow: go below the min value
*/

int main()
{
    int myInt;

    cout << "Size of int: " << sizeof(int) << endl;

    // Overflow case
    myInt = 214783647; // assign the max value
    cout << "Add 1 to the max value: " << myInt + 1 << endl;

    // Underflow case
    myInt = -214783648; // assign the max value
    cout << "Subtract 1 from the min value: " << myInt - 1 << endl;

    return 0;
}
