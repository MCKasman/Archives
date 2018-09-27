#include <iostream>
using namespace std;

/*
Notes:
- Use "cout" to display data on the screen
- When you use cout, you must #inlcude <iostream>
- #include is a pre-processor directive to ask the pre-processor to replace the #include line with the content of another file

- Data can be handled as variables or literals
    - A variable is a container that can hold data, it has a memory location
        - New data can be assigned to the same container
        - A variable has a name and a type
        - There are difference container types to hold different types of data: e.g. int, double, etc.
        - A variable has a name and a type: e.g. int, double, etc.
        - A variable must be defined before it can be used
        - To define a variable, you specify the name and type

    - A literal is data that is fixed and cannot be changed: e.g. "Hello World"
*/
int main()
{
    int number; // define variable of type "int" and of name "number"

    number = 5; // assign 5 (an int literal) to the variable
    cout << "Value of int number is " << number << endl;

    number = 10; // assign 5 (an int literal) to the variable
    cout << "Value of int number is " << number << endl;

    return 0;
}
