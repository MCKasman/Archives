// 10_23_staticLocal

#include <iostream>

using namespace std;

/*
-Static local variables are local variables, but are not destroyed
when the function exits
- The scope of a static local variable is like a local variable (local scope)
- The lifetime of a static local variable is different from a local variable
- Static local variables are initialized to zero by default
*/

double addArg(double x);
double addArgStatic(double x);

int main()
{
    double result;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;

    cout <<  endl << "Now with addArgStatic" << endl;
    result = addArgStatic(10.5);
    cout << "Back from addArgStatic, result = " << result << endl;
    result = addArgStatic(10.5);
    cout << "Back from addArgStatic, result = " << result << endl;
    result = addArgStatic(10.5);
    cout << "Back from addArgStatic, result = " << result << endl;

    return 0;
}

double addArg(double x)
{
    double res = 500;
    cout << "Entered addArg, res = " << res << endl;
    res += x;
    cout << "Leaving addArg, res = " << res << endl;
    return res;
}

double addArgStatic(double x)
{
    static double res = 500; // res is a static local variable
    // this initialization is done only the first time the function is
    // called
    static int num; // Static local variable, initialized to zero by default
    cout << "num = " << num << endl;
    cout << "Entered addArgStatic, res = " << res << endl;
    res += x;
    cout << "Leaving addArgStatic, res = " << res << endl;
    return res;
}
