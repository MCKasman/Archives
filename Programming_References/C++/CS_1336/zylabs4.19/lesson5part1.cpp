/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/7/2018
Purpose of program: The program calculates the number of seconds it will take for sound to travel through the mediums of
air, water, and steel.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // declare and initialize variables
    unsigned int choice;
    double distance;
    double time;

    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Air" << endl;
    cout << "2 Water" << endl;
    cout << "3 Steel" << endl;
    cin >> choice;

    if((choice>=0) && (choice<=3))
    {

        switch (choice)  // Choice must evaluate to an int
        {

        case 1:
            cout << "Enter distance (in feet)"<< endl;
            cin >> distance;
            if(distance > 0)
            {
                cout << "Air: " << fixed << setprecision(3) << distance << " ft" << endl;
                time = distance/1100;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
            {
                cout << "The distance must be greater than zero" << endl;
            }
            break; // Without the break the execution will fall through

        case 2:
            cout << "Enter distance (in feet)"<< endl;
            cin >> distance;
            if(distance > 0)
            {
                cout << "Water: " << fixed << setprecision(3) << distance << " ft" << endl;
                time = distance/4900;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
            {
                cout << "The distance must be greater than zero" << endl;
            }
            break;

        case 3:
            cout << "Enter distance (in feet)"<< endl;
            cin >> distance;
            if(distance > 0)
            {
                cout << "Steel: " << fixed << setprecision(3) << distance << " ft" << endl;
                time = distance/16400;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
            {
                cout << "The distance must be greater than zero" << endl;
            }
            break;

        default:
            cout << "The menu value is invalid. Please run the program again." << endl;

        }

    }

    else
    {
        cout << "The menu value is invalid. Please run the program again." << endl;
    }

    return 0;
}


