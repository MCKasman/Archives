// 10_30_incrementDecrement
#include <iostream>

using namespace std;
/*
Increment/decrement are operators to respectively increase or decrease a variable.
- You are allowed to use the operator only on a variable (something that has a memory location)
- There are two flavors:
1. Prefix: if it is used in conjunction with another operator, the increment/decrement is applied before the other operator (for example, the other operator could be cout, assignment, relational operator, etc.)
2. Postfix: if it is used in conjunction with another operator, the increment/decrement is applied after the other operator (for example, the other operator could be cout, assignment, relational operator, etc.)
    *If it they are used alone, there is no difference between postfix and prefix.
*/
int main()
{
    int val = 5;
    int num;
    // Basic increment/decrement
    cout << "Basic increment/decrement" << endl;
    cout << "val is " << val << endl;
    val++; // postfix increment
    cout << "after val++, val is " << val << endl;
    ++val; //postfix increment
    cout << "after ++val, val is " << val << endl;

    cout << "val is " << val << endl;
    val--; // postfix decrement
    cout << "after val--, val is " << val << endl;
    --val; //postfix decrement
    cout << "after --val, val is " << val << endl;

    // Increment/decrement is conjunction with cout
    cout << endl << "Increment/decrement in conjunction with cout" << endl;
    cout << "val is " << val << endl;
    cout << val++ << endl; // postfix increment
    cout << "after cout << val++, val is " << val << endl;
    cout << ++val << endl; //postfix increment
    cout << "after cout << ++val, val is " << val << endl;

    cout << "val is " << val << endl;
    cout << val-- << endl; // postfix decrement
    cout << "after cout << val--, val is " << val << endl;
    cout << --val << endl; //postfix decrement
    cout << "after cout << --val, val is " << val << endl;

    // Increment/decrement is conjunction with assignment
    cout << endl << "Increment/decrement in conjunction with assignment" << endl;
    cout << "val is " << val << endl;
    num = val++; // postfix increment
    cout << "after num << val++, val is " << val << endl;
    num = ++val; //postfix increment
    cout << "after num << ++val, val is " << val << endl;

    cout << "val is " << val << endl;
    num = val--; // postfix decrement
    cout << "after num << val--, val is " << val << endl;
    num = --val; //postfix decrement
    cout << "after num << --val, val is " << val << endl;

    // Increment/decrement is conjunction with relational
    cout << endl << "Increment/decrement in conjunction with relational" << endl;
    num = 4;
    cout << "num is " << num << endl;
    if(++num == 5)
        cout << "(++num == 5) is true" << endl;
    else
        cout << "(++num == 5) is false" << endl;
    cout << "After if(++num == 5), num is " << num << endl;

    num = 4;

    if(num++ == 5)
        cout << "(num++ == 5) is true" << endl;
    else
        cout << "(num++ == 5) is false" << endl;
    cout << "After if(num++ == 5), num is " << num << endl;

    return 0;
}
