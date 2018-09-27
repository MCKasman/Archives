// 9_20_if

#include <iostream>

using namespace std;
/*
-Relational operators are used to compare: >, <, <=, >=, ==, !=
Do not confuse == (test for equality) with = (assignment)
- Expressions which contain a relational operator have a value of true or false
- "if" allows statements to be conditionally executed or skipped over,
depending on whether expression is true or false, respectively
- If you want multiple statements to be executed, enclose them in braces to create
a block of code
- if(expression)/ else: 2 possible paths of execution, one under the "if",
the other under "else"
*/
int main()
{
    double testAvg;
    char grade;

    cout << "Enter the test average: ";
    cin >> testAvg;

    if(testAvg > 90) // No semi colon after the expression
    {
        cout << "Congratulations, you did well!" << endl; // This statement
        // is executed if (testAvg > 90) is true, skipped otherwise
        grade = 'A';
        cout << "Your grade is " << grade << endl;
    }
    else
    {
        cout << "Try to do better next time" << endl;
        grade = 'B';
        cout << "Your grade is " << grade << endl;
    }
    return 0;
}
