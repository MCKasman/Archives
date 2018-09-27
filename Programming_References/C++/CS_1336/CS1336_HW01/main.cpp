/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 9/2/2018
Purpose of program: Displays variables multiple times to create a triangle pattern and a rectangle pattern, separated by an empty line.
The program then reassigns the character '*' to '$' to the same first variable and displays the same triangle
and rectangle patterns, again separated by an empty line.
*/

#include <iostream>

using namespace std;

int main()
{
    char print = '*';

    char space = ' ';\

    // star triangle
    cout << space << space << space << print << endl;
    cout << space << space << print << print << print << endl;
    cout << space << print << print << print << print << print << endl;
    cout << print << print << print << print << print << print << print << endl;

    // star rectangle
    cout << "\n" << print << print << endl; // skip one line and create rectangle
    cout << print << print << endl;
    cout << print << print << endl;

    // reassign char print to '$'
    print = '$';

    // dollar sign triangle
    cout << "\n" << space << space << space << print << endl; // skip one line after char print is reassigned
    cout << space << space << print << print << print << endl;
    cout << space << print << print << print << print << print << endl;
    cout << print << print << print << print << print << print << print << endl;

    // dollar sign rectangle
    cout << "\n" << print << print << endl; // skip one line and create rectangle
    cout << print << print << endl;
    cout << print << print << endl;

    return 0;
}
