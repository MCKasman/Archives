/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/11/2018
Purpose of program: The program will convert a set of temperatures from Fahrenheit to Celsius through
reading in 3 double values from the user. After the program completes the conversion, it will
display the values between the starting and ending values.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// declare function prototypes
double readValues(double &, double &, double &);
double convert(double);
void displayTemperature(double, double, double, double);

int main()
{
    // declare variables
    double startTemperature, endTemperature, fahrenheitIncrement, fahrenheit, celsius;

    // function call reads in the start temperature, end temperature, and increment value
    readValues(startTemperature, endTemperature, fahrenheitIncrement);

    // stores the starting temperature inputted by the user into the fahrenheit variable
    fahrenheit = startTemperature;

    // function call converts fahrenheit value into celsius and stores it into the celsius variable
    celsius = convert(fahrenheit);

    // function call displays the fahrenheit and celsius until it reaches the end temperature to the user
    displayTemperature(fahrenheit, celsius, endTemperature, fahrenheitIncrement);

    return 0;
}

// function reads in the values of the start temperature, end temperature, and increment value of the temperature
double readValues(double & startTemperature, double & endTemperature, double & fahrenheitIncrement)
{
    cin >> startTemperature;
    cin >> endTemperature;
    cin >> fahrenheitIncrement;

    // input validation for the user's inputs
    // loop prompts the user to reenter inputs if the start temperature is not greater than the end temperature or if the increment value is not greater than 0
    while((startTemperature > endTemperature) || (fahrenheitIncrement <= 0))
    {
        cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
        cin >> startTemperature;
        cin >> endTemperature;
        cin >> fahrenheitIncrement;
    }

    return 1;
}

// function converts the fahrenheit value into celsius
double convert(double fahrenheit)
{
    double celsius;

    // celsius formula
    celsius = (fahrenheit - 32)/1.8;

    return celsius;
}

// function displays the start to end temperature of fahrenheit and celsius
void displayTemperature(double fahrenheit, double celsius, double endTemperature, double fahrenheitIncrement)
{
    // labels which sides are fahrenheit and celsius
    cout << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << endl;

    // loop outputs the fahrenheit and celsius values until it is not less than or equal to the end temperature
    while((fahrenheit <= endTemperature))
    {
        cout << setw(15) << fixed << setprecision(3) << fahrenheit << setw(15) << fixed << setprecision(3) << celsius << endl;

        // sets the new value of fahrenheit with its increment after the first
        fahrenheit = fahrenheit + fahrenheitIncrement;

        // converts the new value of fahrenheit into celsius
        celsius = (fahrenheit - 32)/1.8;
    }
}
