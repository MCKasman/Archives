//9_25_relational
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

/*
- A relational operator is used to compare numbers: <, >, <=, >=, ==, !=
- Do not confuse == (test for equality) with = (assignment)
- A relational expression is an expression that contains relational operators:
  e.g. 12 > 5
- A Boolean expression is an expression that has a value of true or false (true = 1 & false = 0).
- A relational expression is a Boolean expression.
- Zero is evaluated as false, non-zero as true.
*/
int main()
{
    int x = 5, y = 10;
    bool result;

    result = x > y;
    cout << "Value of result is " << result << endl;

    result = true;
    cout << "Value of result is " << result << endl;

    result = false;
    cout << "Value of result is " << result << endl;

    result = 3.1416; // Non-zero is evaluated as true
    cout << "Value of result is " << result << endl;

    result = 0;
    cout << "Value of result is " << result << endl;


    return 0;
}
