// 10_9_function2
#include <iostream>

using namespace std;

double getValue() // function header
// parameter list is empty
{ // body starts here
    double val;
    cout << "Enter value: ";
    cin >> val;
    return val;
} // body ends here

double calcAverage(double x, double y, double z) // x], y, z are parameters
{ // you must list the data type for each parameter
    return (x+y+z)/3;
}

void printResult(double result)
{
    cout << "Average is " << result << endl;
}

/*
- A function is a module of code that performs a task
- The module is packaged in a block of code and given a name
- To execute the task, just call the function by its name
- A function definition consists of:
    1. Return type: Data type of what is returned by the function, if any
    2. name: Follow the same rules as for variable names. Good practice is to choose meaningful names
    3. Parameter list: List of variables, along with their types, that contain data passed to the function. List could be empty if
    there is no data to pass to the function
    4. Body: Enclosed in a block of code. It is the statement that make up the function

- The first line of a function definition is the function header
- The compiler needs a minimum of info to process a function call: return type, name, number of parameters and their types
1. You can put the function definition before the function call (in which case you don't need a prototype)
2. Or you can write a prototype and put it before the first function call
(in which case you can put the function definition anywhere in the program)
- An argument is the data passed to the function when you call the function, a parameter is the data received inside the function definition
*/

// function prototypes
double getValue();
double calcAverage(double, double, double);
void printResult(double);

int main()
{
    double val1, val2, val3, res;

    // Prompt the user to enter the 1st value
    val1 = getValue();


    // Prompt the user to enter the 2nd value
    val2 = getValue();

    // Prompt the user to enter the 3rd value
    val3 = getValue();

    // Calculate average
    res = calcAverage(val1, val2, val3); // val1, val2, val3 are arguments

    // Print result
    printResult(res);

    return 0;
}
