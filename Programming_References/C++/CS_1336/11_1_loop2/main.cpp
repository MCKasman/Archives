// 11_1_loop2

#include <iostream>

using namespace std;

/*
- "do-while" loop is another type of loop
Starts by executing the body of the loop, then evaluate the expression after the
while
If expression is true, execute the loop again and evaluate again.
If expression is false, exit the loop
do-while loop is a "post-test loop", because it tests after loop execution
do-while loop can be used to display menu
- "for" loop is another type of loop
General syntax of loop header is for(initialization ; test ; update)
Start by executing initialization, then test. If test is true, execute the loop,
then update, then test again. As long as test is true, stay in the loop.
If test is false, exit the loop or may not even enter the loop at all
You can define a variable in the initialization part. The scope of that
variable is the for loop
Can use loops to calculate a running total
*/

int main()
{
    int choice, numIterations, numEmployees = 3;
    double hours, rate;

    do
    {
        cout << "Menu: 1->chicken, 2->pork, 3->Vegan, 4->Quit: ";
        cin >> choice;
        cout << "You chose " << choice << endl;
    }
    while (choice != 4);

    // for loop
    for (numIterations = 0; numIterations < numEmployees; numIterations++)
    {
        cout << "Enter hours and rate: ";
        cin >> hours >> rate;
        cout << "Salary is " << hours * rate << endl;
    }

    //  Running total
    int sum = 0;
    for (int i = 1; i <= 10; i++) // Define variable i inside the for loop
      sum += i;
    cout << "Sum of numbers from 1 to 10 is " << sum << endl;
    // cout << "i = " << i << endl; // This won't compile, I am outside the
    // scope of i
    return 0;
}
