// 10_25_driver

#include <iostream>

using namespace std;
/*
- Driver: a piece of code written to test the correctness of a function
- Stub: a simplified version of the function to test the correctness of the
other part of the code
*/
bool isOdd(int num);

int main() // main is the driver for isOdd
{
    int val;

    if(isOdd(8))
        cout << "isOdd did not correctly determine that 8 is even";
    else
        cout << "isOdd correctly determined that 8 is odd" << endl;

    if(isOdd(17))
        cout << "isOdd correctly determined that 17 is odd";
    else
        cout << "isOdd did not correctly determine that 17 is odd" << endl;

    return 0;
}

bool isOdd(int num)
{
    if (num %2 == 0)
        return false;
    else
        return true;
}
