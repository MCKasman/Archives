/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/14/2018
Purpose of program: The program reads in the number of seconds and calculates how far sound can travel in a specified medium in that many seconds.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int value;
    double const CARBON_DIOXIDE = 258.0, // Meters per second
                 AIR = 331.5,
                 HELIUM = 972.0,
                 HYDROGEN = 1270.0;
   double time, traveled;

    // Menu
    cout << "Select the medium that sound is traveling through:"
         << "\n1 Carbon Dioxide"
         << "\n2 Air"
         << "\n3 Helium"
         << "\n4 Hydrogen" << endl;

   // Input
   cin >> value;

   // Output
   if ((value <= 0) || (value > 4))
   {
      cout << "The menu value is invalid. Please run the program again." << endl;
   }
   else
   {
      cout << "Enter time (in seconds)" << endl;
      cin.ignore();
      cin >> time;

      if((time < 0) || (time > 30))
      {
         cout << "The time must be between 0.00 and 30.00 (inclusive)" << endl;
      }
      else
      {
         if(value == 1)
         {
            cout << setprecision(2) << fixed << "Carbon Dioxide: " << time << " seconds" << endl;
            traveled = time * CARBON_DIOXIDE;
            cout << setprecision(3) << fixed << "Traveled " << traveled << " meters" << endl;
         }
         else if(value == 2)
         {
            cout << setprecision(2) << fixed << "Air: " << time << " seconds" << endl;
            traveled = time * AIR;
            cout << setprecision(3) << fixed << "Traveled " << traveled << " meters" << endl;
         }
         else if(value == 3)
         {
            cout << setprecision(2) << fixed << "Helium: " << time << " seconds" << endl;
            traveled = time * HELIUM;
            cout << setprecision(3) << fixed << "Traveled " << traveled << " meters" << endl;
         }
         else
         {
            cout << setprecision(2) << fixed << "Hydrogen: " << time << " seconds" << endl;
            traveled = time * HYDROGEN;
            cout << setprecision(3) << fixed << "Traveled " << traveled << " meters" << endl;
         }
      }
   }
    return 0;
}
