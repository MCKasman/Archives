// 10_23_lifetime

#include <iostream>

using namespace std;

/*
lifetime of a local variable:
- When a function is called, its local variables and parameters are created
- When a function terminates, its local variables and parameters are destroyed
- Any value stored in them is lost
- One way to save the information is through the return statement
- A parameter is like a local variable defined at the beginning of the function
(they are defined in the parameter list). Their scope is the whole function
*/
double addArg(double);

int main()
{
    double result;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;
    result = addArg(10.5);
    cout << "Back from addArg, result = " << result << endl;

    return 0;
}
double addArg(double x)
{
    double res = 500;
    cout << "Entered addArg, res= " << res << endl;
    res += x;
    cout << "Leaving addArg, res = " << res << endl;
}
