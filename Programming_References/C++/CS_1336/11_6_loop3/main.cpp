// 11_6_loop3
#include <iostream>

using namespace std;
/*
- A sentinel is a special value to indicate end of data
- The special value must be different from a valid value
- A sentinel (MY_SENTINEL) can be used to control a loop when you don't know upfront how many iterations you will loop

- A loop can be nested within another loop
- Any combination is allowed: while within while,  with within for, etc.
*/

int main()
{
    const int MY_SENTINEL = -1;
    int hours;
    double rate;
    const double MAX_RATE = 500;
    const double MIN_RATE = 10;

    cout << "Enter the number of hours, " << MY_SENTINEL << " when done: ";
    cin >> hours;

    // loop over employees (outer loop)
    while(hours != MY_SENTINEL)
    {
        cout << "Enter the rate: ";
        cin >> rate;

        // input validation for the rate (inner loop)
        while((rate < MIN_RATE) || (rate > MAX_RATE))
        {
            cout << "Invalid value, please reenter: ";
            cin >> rate;
        }

        cout << "Salary is " << hours * rate << endl;

        cout << "Enter the number of hours, " << MY_SENTINEL << " when done: ";
        cin >> hours;

    }
}
