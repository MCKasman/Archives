// 9_6_typeCoercion
// Michael Kasman
#include <iostream>

using namespace std;

/*
The compiler automatically enforces three coercion rules
*/
int main()
{
   // Rule #1: char, short, unsigned short are automatically
    // converted to int in a mathematical expression
    cout << 'a' + 1 << ' ' << 'a' * 'b' << endl;
    // 'a' and 'b' will be converted to their ASCII code
    // and put in an int

    // Rule #2: THe lower ranked type will be promoted to the
    // higher rank in the same expression
    cout << 10/3.0 << endl;
    // 10 is promoted to double, which avoids integer division

    // Rule #3: In an assignment, the right hand side is converted
    // to the type of the left hand side (could be promotion or demotion)
    double myDouble = 10.9;
    int myInt;
    myInt = myDouble;
    cout << "Value of myInt = " << myInt << endl;

    // Coercion is temporary and does not change the type of the original data
    cout << "Size of myDouble = " << sizeof(myDouble) << endl;
    myInt =5;
    myDouble = myInt;
    cout << "Value of myDouble = " << myDouble << endl;

    return 0;
}
