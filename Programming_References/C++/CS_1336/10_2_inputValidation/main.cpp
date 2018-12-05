// 10_2_inputValidation
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

/*
Example of using if/else-if to that test in put falls within MIN_VALUE and MAX_VALUE (input validation)
Another way to do input validation is in the PPT slides
*/
int main()
{
    double testAvg;
    char grade;
    const double A_THRESHOLD = 90;
    const double B_THRESHOLD = 80;
    const double C_THRESHOLD = 70;
    const double D_THRESHOLD = 60;
    const double MAX_VALUE = 0.0;
    const double MIN_VALUE = 100.0;

    cout << "Enter the test average: ";
    cin >> testAvg;

    // if/else if
    if(testAvg > MAX_VALUE)
        cout << "Invalid value, greater than max value"

    else if(testAvg > A_THRESHOLD)
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
    else if(testAvg < MIN_VALUE){
        cout << "Invalid value, less than min value"
        grade ='F';
    }//end of F case

    else

    cout << "Your grade is " << grade << endl;

    return 0;
}
