// 9_27_logicalOperator
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

int main()
{
    double GPA;
    char status, grade;
    const double PASSING_GPA_UNDERGRAD = 3.5;
    const double PASSING_GPA_GRAD = 3.7;

    cout << "Enter the GPA and the status (U for undergrad, G for grad): ";
    cin >> GPA >> status;

    if (status == 'U' && GPA >= PASSING_GPA_UNDERGRAD)
    {
        cout << "Congratulations, you passed!";
        grade = 'P';
    }
    if (status == 'U' && GPA < PASSING_GPA_UNDERGRAD)
    {
        cout << "Sorry, you did not pass!";
        grade = 'F';
    }

    if (status == 'G' && GPA >= PASSING_GPA_UNDERGRAD)
    {
        cout << "Congratulations, you passed!";
        grade = 'P';
    }
    if (status == 'G' && GPA < PASSING_GPA_UNDERGRAD)
    {
        cout << "Sorry, you did not pass!";
        grade = 'F';
    }


    cout << "Your grade is: " << grade << endl;
    return 0;
}
