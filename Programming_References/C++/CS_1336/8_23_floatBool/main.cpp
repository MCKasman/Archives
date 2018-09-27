#include <iostream>

using namespace std;
/* Notes:
-Floating point data types gold numbers with a fractional part: e.g. 3.1416
- There are 3 types: float, double, long double
- Bool is a data type that has 2 possible values: true or false
- True and false are represented in memory as 1 and 0 respectively
*/
int main()
{
    //Floating point data type
    double myDouble = 3.1415;
    cout << "Value of myDouble is " << myDouble << endl;

    myDouble = 0.31459E2;

    cout << "Value of myDouble is " << myDouble << endl;

    //Bool data type
    bool myBool = true;
    cout << "Value of myBool is " << myBool << endl;

    myBool = false;

    cout << "Value of myBool is " << myBool << endl;

    return 0;
}
