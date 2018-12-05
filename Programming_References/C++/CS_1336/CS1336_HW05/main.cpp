/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/15/2018
Purpose of program: The program asks for the weight of the package and the distance to be shipped, then displays
the charges.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weight, distance, charge;
    int roundedMultiple;
    double const TWO_LESS = 1.10,
                 TWO_SIX = 2.20,
                 SIX_TEN = 3.70,
                 TEN_TWENTY = 4.80;
   // Prompt
    cout << "Enter the weight of the package in kilograms (max 20 kg): ";
    cin >> weight;
    cout << "Weight entered is " << weight << endl;

    if(weight > 20) //Checks for weight over 20 kg
    {
        cout << "We do not ship packages of more than 20 kg." << endl;
    }
    else if(weight <=0) // Checks for weight 0 or below
    {
        cout << "Weight must be greater than zero." << endl;
    }
    else //For valid weight
    {
       // Prompt
        cout << "Enter the distance to be shipped: (min 10 Mi, max 3000 Mi): ";
        cin.ignore(); // Flushes the previous cin
        cin >> distance;
        cout << "Distance entered is " << distance << endl;

        if((distance < 10) || (distance > 3000)) //Checks for valid distance
        {
            cout << "We do not ship less than 10 miles or more than 3000 miles." << endl;
        }
        else //Valid distance
        {
            roundedMultiple = ((distance - 1) / 500) + 1; //Returns a rounded multiple in integer
            cout << setprecision(2) << fixed; // To get two decimal places for charges

            if(weight <= 2)
            {
                charge = TWO_LESS * roundedMultiple;
                cout << "The shipping charge is $" << charge << endl;
            }
            else if((weight > 2) && (weight <= 6))
            {
                charge = TWO_SIX * roundedMultiple;
                cout << "The shipping charge is $" << charge << endl;
            }
            else if((weight > 6) && (weight <= 10))
            {
                charge = SIX_TEN * roundedMultiple;
                cout << "The shipping charge is $" << charge << endl;
            }
            else if((weight > 10) && (weight <= 20))
            {
                charge = TEN_TWENTY * roundedMultiple;
                cout << "The shipping charge is $" << charge << endl;
            } // End of valid weight and distance to display charges
        } // End of valid distance
    } // End of valid weight
    return 0;
}//End of function main
