#include <iostream>

using namespace std;
/*
- Short circuit evaluation: In a logical AND or logical OR expression, evaluation of the 2nd operator is skipped if the true/false value of the whole expression
can already be determined after evaluating the first operand.

- To optimize execution speed:
1. Put the simpler operand as the first operand
2. If one operand is likely to be true, and it is a logical OR, put that operand first.
If one operand is likely to be false, and it is a logical AND, put that operand first.
*/

int main()
{
    int jobGrade;

    // Do not confuse = (assignment) with == (test for equality)
    cout << "Enter the job grade: ";
    cin >> jobGrade;
    cout << "Job grade entered is " << jobGrade << endl;

    if (jobGrade == 10)
        cout << "Your job grade is " << jobGrade << ", you get a bonus" << endl;
    else
        cout << "Your job grade is " << jobGrade << ", you don't get a bonus" << endl;

    // Incorrect code
    if (jobGrade = 10)
        cout << "Your job grade is " << jobGrade << ", you get a bonus" << endl;
    else
        cout << "Your job grade is " << jobGrade << ", you don't get a bonus" << endl;

    // Short circuit evaluation
    int x = 5, y=100;

    if(x && (y=200))
        cout << "Expression is true" << endl;
    else
        cout << "Expression is false" << endl;
    cout << "Value of y is " << y << endl;

    if(x || (y=200))
        cout << "Expression is true" << endl;
    else
        cout << "Expression is false" << endl;
    cout << "Value of y is " << y << endl;


    x = 0;
    y = 200;

    if(x && (y=200))
        cout << "Expression is true" << endl;
    else
        cout << "Expression is false" << endl;
    cout << "Value of y is " << y << endl;

    return 0;

}
