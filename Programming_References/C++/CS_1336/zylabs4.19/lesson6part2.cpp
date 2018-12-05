/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/20/2018
Purpose of program: The program will be creating multiple functions to calculate the present value.
*/
#include <iostream>
#include <iomanip>
#include <cmath> // for pow() function

using namespace std;

// function reads the user's input for future value
double readFutureValue()
{
    double value;

    cout << "Enter future value" << endl;
    cin >> value;

    if (value <= 0)
    {
        cout << "The future value must be greater than zero" << endl;

        return -1;
    }
    else
    {
        return value;
    }
}

// function reads the user's input for interest rate
double readInterestRate()
{
    double interest;

    cout << "Enter annual interest rate" << endl;
    cin >> interest;

    if (interest <= 0)
    {
        cout << "The annual interest rate must be greater than zero" << endl;

        return -1;
    }
    else
    {
        return interest;
    }
}

// function reads the user's input for number of years
int readYears()
{
    int years;

    cout << "Enter number of years" << endl;
    cin >> years;

    if (years <= 0)
    {
        cout << "The number of years must be greater than zero" << endl;

        return -1;
    }
    else
    {
        return years;
    }
}

// function calculates the present value
double calculatePresentValue(double futureValue, double interestRate, int numberYears)
{
    double presentValue = futureValue/(pow((1+interestRate), numberYears));

    return presentValue;
}

// function displays the program's results of future value, interest rate, number of years, and present value
void displayResults(double futureValue, double interestRate, int numberYears, double presentValue)
{
    interestRate = interestRate * 100;

    cout << "Present value: $" << fixed << setprecision(2) << presentValue << endl;
    cout << "Future value: $" << fixed << setprecision(2) << futureValue << endl;
    cout << "Annual interest rate: " << fixed << setprecision(1) << interestRate << "%" << endl;
    cout << "Years: " << numberYears << endl;
}
int main()
{
    // function call to read the inputted future value
    double futureValue = readFutureValue();
    if(futureValue == -1) {
        return 0;
    }

    // function call to read the inputted interest rate
    double interestRate = readInterestRate();
    if(interestRate == -1) {
        return 0;
    }

    interestRate = interestRate/100;

    // function call to read the inputted number of years
    int numberYears = readYears();
    if(numberYears == -1) {
        return 0;
    }

    // function call to calculate the present value
    double presentValue = calculatePresentValue(futureValue, interestRate, numberYears);

    //function call to display the results of the future value, interest rate, number of years, and present value
    displayResults(futureValue, interestRate, numberYears, presentValue);

    return 0;
}
