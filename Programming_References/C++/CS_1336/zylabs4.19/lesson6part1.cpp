/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/20/2018
Purpose of program: The program will calculate the distance an object travels (in meters) on Earth for a specified number of seconds.
*/
#include <iostream>
#include <iomanip>
#include <cmath> // for pow() function

using namespace std;

// function reads in a value from cin. If the value is less that or equal to zero the function should output a message: "The time must be greater than 0"
// the value read in should be returned to the calling function
double readSeconds()
{
    double time;

    cout << "Enter the time (in seconds)" << endl;
    cin >> time;

    if (time <= 0)
    {
        cout << "The time must be greater than zero" << endl;

        return -1;
    }
    else
    {
        return time;
    }

}

//function calculates the distance traveled (on earth) during the number of seconds pass in as a parameter
//the distance is calculated in meters and is returned to the calling function
double calculateDistance(double seconds)
{
    double const GRAVITY = 9.8;

    double distance = 0.5 * GRAVITY * pow(seconds, 2);

    return distance;
}

void displayResults(double seconds, double distance)
{
    cout << "The object traveled " << fixed << setprecision(3) << distance << " meters in " << fixed << setprecision(2) << seconds << " seconds" << endl;

}

int main()
{
    // declare variables
    double seconds, distance;

    // function call to obtain inputted seconds
    seconds = readSeconds();

    // if seconds = -1, then the user inputted incorrectly
    if(seconds == -1) {
        return 0;
    }

    // function call to calculate the distance traveled
    distance = calculateDistance(seconds);

    // function call to display the results of the variables inputted
    displayResults(seconds, distance);

    return 0;
}
