//10_25_overloaded

#include <iostream>

using namespace std;

int squared(int num);
double squared(double num);
/*
Overloaded functions are distinct functions which have the same name but different parameter lists:
- Could be a different number of parameters, or some difference in the data types of the parameters
- Based on the arguments passed when the function is called, the compiler will use the right function
*/

int main()
{
    int myInt;
    double myDouble;

    cout << "Enter an int and a double: ";
    cin >> myInt >> myDouble;
    cout << "Square of int is " << squared(myInt) << endl; // pass an int
    cout << "Square of double is " << squared(myDouble) << endl; // pass a double
    return 0;
}

int squared(int num)
{
    return num * num;
}

double squared(double num)
{
    return num * num;
}
