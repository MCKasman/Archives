/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/4/2018
Purpose of program: The program will calculate the future value by reading the present value, monthly interest rate, and number of months for this investment.
After the program calculates the future value, it will display all the calculated and inputted variables: future value, present value, monthly interest rate, and number of months for this investment.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

// function prototypes
void readValues(double & , double & , int &);
double calculateFutureValue(double, double, int);
void displayValues(double &, double &, double &, int&);

int main()
{
    // declare variables
    double futureValue, presentValue, interestRate;
    int months;

    // function call to read in user input
    readValues(presentValue, interestRate, months);

    // checks whether user input meets expectations
    if((presentValue > 0) && (interestRate > 0) && (months > 0))
    {
        // converts percentage interest rate into a decimal
        interestRate = interestRate/100;

        // calculates the future value
        futureValue = calculateFutureValue(presentValue, interestRate, months);
    }

    // if user input does not meet expectations, it will display the user input and output that one or more of the values are not greater than 0
    else
    {
        // sets decimal precision to 2
        cout << fixed << showpoint;
        cout << fixed << setprecision(2);
        cout << presentValue << " " << interestRate << " " << months << endl;
        cout << "One or more of the above values are not greater than zero" << endl;
        exit(EXIT_FAILURE);
    }

    // converts interest rate decimal back into percentage
    interestRate = interestRate * 100;

    // function call to display the future value, present value, interest rate, and months of investment
    displayValues(futureValue, presentValue, interestRate, months);

    return 0;
}

// function reads the input by the user
void readValues(double & presentValue, double & interestRate, int & months)
{
    cin >> presentValue;
    cin >> interestRate;
    cin >> months;

}

// function calculates the future value with the inputted present value, interest rate, and months of investment
double calculateFutureValue(double presentValue, double interestRate, int months)
{
    double futureValue = presentValue * pow((1+interestRate), months);
    return futureValue;
}

// function displays the future value, present value, monthly interest, and months of investment
void displayValues(double & futureValue, double & presentValue, double & interestRate, int & months)
{
    // sets decimal precision to 2
    cout << fixed << showpoint;
    cout << fixed << setprecision(2);

    cout << right << setw(18) << "Future Value" << right << setw(18) << "Present Value" << right << setw(18) << "Monthly Interest" << right << setw(10) << "Months" << endl;
    cout << right << setw(18) << futureValue << right << setw(18) << presentValue << right << setw(18) << interestRate << right << setw(10) << months << endl;
}
