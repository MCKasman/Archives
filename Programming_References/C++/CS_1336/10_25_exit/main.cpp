// 10_25_exit

#include <iostream>
#include <cstdlib> // directive that includes 'exit'

using namespace std;

double divide(double num, double denom);

/*
- exit() is a function that can be called in any function
- Effect is to terminate the program
- Can pass an int to indicate the status of termination (normal, abnormal)
- exit(EXIT_SUCCESS) for normal termination
- exit(EXIT_FAILURE) for abnormal termination
*/

int main()
{
    double x, y, res;

    res = divide(x,y);
    cout << "Enter numerator and denominator ";
    cin >> x >> y;
    cout << "Quotient is " << res;
    return 0;
}

double divide(double num, double denom)
{
    if(denom == 0)
    {
        cout << "Error, cannot divide by zero";
        exit(EXIT_FAILURE); // exit on abnormal termination
    }
    return num/denom;
}
