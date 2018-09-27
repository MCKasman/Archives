// 9_6_expressionOperator
// Michael Kasman
#include <iostream>

using namespace std;

/*
- An expression is something that can be evaluated to a value
Examples:
    - a literal: 7, 10.8
    - a variable: id
    - some combination using operators: GPA * 1.1
- An expression can be used in cout or an assignment
- In complex expressions involving multiple operators, the order in which the operators matters. The order is defined by the C++ precedence rules
- A programmer can always override the rules with parens
*/

int main()
{
    double GPA = 2.5, boostedGPA;
    double val1 = 10.5, val2 = 100.4;

    // Can cout an expression
    cout << "Boosted GPA is " << GPA * 1.1 << endl;

    // Can use an expression in an assignment
    boostedGPA = GPA * 1.1;
    cout << "Value of boosted GPA is " << boostedGPA << endl;

    // Override with parens
    cout << "val1 + val2 /2 = " << val1 + val2 /2 << endl;

    // Example of unary negation
    cout << "-5 + -3 is " << -5 + -3 << endl;
    return 0;
}


