// 9_11_streamManipulator
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;
/*
With stream manipulators, the programmer can control the output format.
Requires #include <iomanip>
*/

int main()
{
    // setw()
    double s11 = 90, s12 = 85.75, s13 = 95.1; // test scores of student 1
    double s21 = 79.1234, s22 = 88, s23 = 99; // test scores of student 2

    cout << s11 << ' ' << s12 << ' ' << s13 << endl;
    cout << s21 << ' ' << s22 << ' ' << s23 << endl;

    return 0;
}
