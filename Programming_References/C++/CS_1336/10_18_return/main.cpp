//10_18_return
#include <iostream>

using namespace std;

void myDivide(double x, double y);
double calcAverage(double n1, double n2);
/*
- The return statement can be used to exit a function
- The C++ language allows you to put it anywhere in the function
- If the return is executed, the statements that follow the the return will
not be executed
- Can be used to prevent abnormal termination of the program (e.g. divide by 0)
- Can be "return expression"
- Ways to use a value returned by a function: assign to a variable
*/

int main()
{
    double numerator, denominator, res;
    cout << "Enter a numerator and denominator: ";
    cin >> numerator >> denominator;
    myDivide(numerator, denominator);

    // First way to use a value returned by a function: assign to a variable
    res = calcAverage(numerator, denominator);
    cout << "Average is " << res << endl;

    // Second way to use a value returned by a function: cout
    cout << "Average is " << calcAverage(numerator, denominator) << endl;

    // Third way to use a value returned by a function: use in an expression
    cout << "Square of average is " << calcAverage(numerator, denominator)*calcAverage(numerator, denominator) << endl;
    return 0;
}

void myDivide(double x, double y)
{
    if(y == 0)
    {
        cout << "Error, cannot divide by zero" << endl;
        return; // This will make the execution skip the rest of the function. This return is not optional
    }
        cout << "Quotient is " << (x/y) << endl;
        return; // This return is optional

}

double calcAverage(double n1, double n2)
{
    return(n1+n2)/2;
}
