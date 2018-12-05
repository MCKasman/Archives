//10_4_scope
#include <iostream>

using namespace std;

/*
- The scope of a variable begins when you define the variable and ends at the end of the block of code where
 it is defined
- It is legal to define a new variable in an inner block which has the same name as another variable in an outer block. It will be two separate variables
 When you are in the scope of the new variable, the new variable will "hide" the other variable. It is not recommended to use the same name.
*/

int main()
{
    double GPA;
    char status, grade = '*';
    const double PASSING_GPA_UNDERGRAD = 3.5;
    const double PASSING_GPA_GRAD = 3.7;

    cout << "Enter the GPA and the status (U for undergrad, G for grad, and S for special): ";
    cin >> GPA >> status;

    if (status == 'U')
    {
        if (GPA >= PASSING_GPA_UNDERGRAD)
        {
           char grade; // Defined a new variable with the same name
           // Scope of new variable begins here
            cout << "Congratulations, you passed!";
            grade = 'P';
            cout << "New grade is " << grade << endl;
        } // Scope of new variable ends here
        else
        {
            cout << "Sorry, you did not pass!";
            grade = 'F';
        }
    }
    else
    {
        if (status == 'U')
        {
            if (GPA >= PASSING_GPA_GRAD)
        {
            cout << "Congratulations, you passed!";
            grade = 'P';
        }
        else
        {
            cout << "Sorry, you did not pass!";
            grade = 'F';
        }
        }
    else{

    }
    }

    cout << "Your grade is: " << grade << endl;
    return 0;
}
