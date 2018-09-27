// 9_4_sizeof
#include <iostream>

using namespace std;

/*
-sizeof(): operator returns the size of a data type or a variable

*/
int main()
{
    // First way to use sizeof
    cout << "Size of long int is " << sizeof(long int) << " bytes" << endl;

    cout << "Size of int is " << sizeof(int) << " bytes" << endl;

    cout << "Size of char is " << sizeof(char) << " bytes" << endl;

    cout << "Size of double is " << sizeof(double) << " bytes" << endl;

    cout << "Size of float is " << sizeof(float) << " bytes" << endl;

    // Second way to use sizeof
    long int myLongInt;
    int myInt;
    char myChar;
    double myDouble;
    float myFloat;

    cout << "\nSize of myLongInt is " << sizeof(myLongInt) << " bytes" << endl;

    cout << "Size of myInt is " << sizeof(myInt) << " bytes" << endl;

    cout << "Size of myChar is " << sizeof(myChar) << " bytes" << endl;

    cout << "Size of myDouble is " << sizeof(myDouble) << " bytes" << endl;

    cout << "Size of myFloat is " << sizeof(myFloat) << " bytes" << endl;

    // sizeof for a C-string
    cout << "\nSize of C-string is " << sizeof("Hello") << endl;

    // size of returns incorrect value for C++ string class
    // Should use length member function
    string name = "Michael Kasman";

    cout << "\nSize of C++ string class using sizeof is " << sizeof(name) << " bytes" << endl;

    cout << "Size of C++ string class using length member function is " << name.length() << " characters" << endl;


    return 0;
}
