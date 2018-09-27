// 9_25_if_elseIf
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

/*
if/else-if is logically equivalent to an "if" followed by an "else" under which nested an "if," but it is less convenient
because there is less indentation. The code is easier to read.

*/
int main()
{
    double testAvg;
    char grade;
    const double A_THRESHOLD = 90;
    const double B_THRESHOLD = 80;
    const double C_THRESHOLD = 70;
    const double D_THRESHOLD = 60;

    cout << "Enter the test average: ";
    cin >> testAvg;

    if(testAvg > A_THRESHOLD)
    {

        grade = 'A';
    }
        else
        {
            if (testAvg > B_THRESHOLD)
            {
                grade = 'B';

            }
            else
            {
                if (testAvg > C_THRESHOLD)
                {
                    grade = 'C';

                }

                else
                {
                    if (testAvg > D_THRESHOLD)
                    {
                        grade = 'D';

                    }
                }
            }
        }


    if(testAvg > A_THRESHOLD)
    {

        grade = 'A';

    }// end of A case
    else if (testAvg > B_THRESHOLD)
    {
        grade = 'B';

    }//end of B case

    else if (testAvg > C_THRESHOLD)
    {
        grade = 'C';

    }//end of C case


    else if (testAvg > D_THRESHOLD)
    {
        grade = 'D';

    }//end of D case
    else
    {
        grade ='F';
    }//end of F case

    cout << "Your grade is " << grade << endl;

    return 0;
}
