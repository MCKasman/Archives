// 9_25_nestedIf
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

int main()
{
    double GPA;
    char status, grade;
    const double PASSING_GPA_UNDERGRAD = 3.5;
    const double PASSING_GPA_GRAD = 3.7;
    const double PASSING_GPA_SPECIAL = 1.0;

    cout << "Enter the GPA and the status (U for undergrad, G for grad, S for special):" << endl;
    cin >> GPA >> status;

    if (status == 'U')
    {
        if (GPA > PASSING_GPA_UNDERGRAD)
        {
            cout << "Congratulations, you passed!";
            grade = 'P';
        }
        else
        {
            cout << "You did not meet the requirements to pass." << endl;
        }
    }

    else
    {
        if (status == 'G')
        {
            if (GPA > PASSING_GPA_GRAD)
            {
                cout << "Congratulations, you passed!";
                grade = 'P';
            }
            else
            {
                cout << "You did not meet the requirements to pass." << endl;
            }
        }
    }
    else
    {
        if (status == 'S')
        {
            if (GPA > PASSING_GPA_SPECIAL)
            {
                cout << "Congratulations, you passed!";
                grade = 'P';
            }
            else
            {
                cout << "You did not meet the requirements to pass." << endl;
            }
        }
    }

    cout << " Your grade is " << grade << endl;

    return 0;
}
