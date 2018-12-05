// 10_30_loop1

#include <iostream>

using namespace std;

/*
while loop is the first type of loop in C++
while(expr): As long as expr is true, stay in the loop
If the first evaluation of expr is false, the loop is never entered
Be sure to make the expr eventually become false, or you will have an infinite loop
A counter is a common way to control the loop. A counter is incremented or decremented
at each iteration of the loop
Can use while loop for input validation
*/
   int main()
{

    int numIterations = 0; // Counter for loop control
    int numEmployees;
    double hours, rate;


    // Use while loop for input validation
    cout << "Enter number of employees: ";
    cin >> numEmployees;
    cout << endl;

    // Do input validation on number of employees
    // Loop as long as input is invalid
    while (numEmployees <= 0)
    {
        cout << "Enter number of employees: ";
        cin >> numEmployees;
        cout << endl;
    }

    // After input is validated, I now calculate the wages
    // using another while loop
    while (numIterations < numEmployees) // numIterations is a counter for loop control
    {
        cout << "Enter hours and rate: ";
        cin >> hours >> rate;
        cout << "Salary is " << hours * rate << endl;
        numIterations++;
    }

    return 0;
}
