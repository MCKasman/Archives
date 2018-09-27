// 9_13_streamManipulator2
// CS 1336 Michael Kasman
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // setw(x)
    double s11 = 90, s12 = 85.75, s13 = 95.1; //Test scores of student 1
    double s21 = 79.1234, s22 = 88, s23 = 99; //Test scores of student 2
    string name1 = "Chewbacca", name2 = "R2D2";

    cout << "Student's name: " << name1 <<  ' ' << s11 << ' ' << s12 << ' ' << s13 << endl;
    cout << "Student's name: " << name2 <<  ' ' <<  s21 << ' ' << s22 << ' ' << s23 << endl;

    cout << "\nWith setw()" << endl;
    cout << "Student's name: " << setw(10) << name1 <<  setw(8) << s11 << setw(8) << s12 << setw(8) << s13 << endl;
    cout << "Student's name: " << setw(10) << name2 <<  setw(8) << s21 << setw(8) << s22 << setw(8) << s23 << endl;

    // showpoint
    cout << "\nShowpoint\n";
    cout << "s11 w/o showpoint is " << s11 << endl;
    cout << showpoint << "s11 with showpoint is " << s11 << endl;

    // setprecision(x)
    double PI = 3.14159;
    cout << "\nPI w/o setprecision: " << PI << endl;
    cout << setprecision(6) << "PI w setprecision(6): " << PI << endl;
    cout << setprecision(4) << "PI w setprecision(4): " << PI << endl;
    cout << "nPI w/o setprecision: " << PI << endl;

    // setprecision(x) with fixed
    cout << fixed;
    cout << setprecision(6) << "\nPI w setprecision(6) with fixed: " << PI << endl;
    cout << setprecision(4) << "PI w setprecision(4) with fixed: " << PI << endl;

    cout << "\nTest scores with setw() and setprecision(2) and fixed" << endl;
    cout << setprecision(2);
    cout << "Student's name: " << setw(10) << name1 <<  setw(8) << s11 << setw(8) << s12 << setw(8) << s13 << endl;
    cout << "Student's name: " << setw(10) << name2 <<  setw(8) << s21 << setw(8) << s22 << setw(8) << s23 << endl;
    return 0;
}
