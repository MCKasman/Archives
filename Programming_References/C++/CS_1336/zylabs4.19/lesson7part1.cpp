/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/4/2018
Purpose of program: The program will display the status of an order for the ACME Wholesale Wire Company.
The program prompts for the number of spools ordered, in stock, and shipping and handling amount, reads in the value for the number of spools ordered,
asks if there is special shipping and handling. All of the information is compiled and displayed in a report format.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// function prototypes
void readInformation(int &, int &, char &, double &);
void displayInformation(int , int , double);

int main()
{
    // declare variables
    double shippingCost;
    int spoolsOrdered, spoolsStock;
    char shippingChoice;

    // function reads in information from the user on the number of spools ordered and in stock, the shipping choice, and shipping cost
    readInformation(spoolsOrdered, spoolsStock, shippingChoice, shippingCost);

    // checks if user input meets required expectations
    if((spoolsOrdered >= 1) && (spoolsStock >= 0) && (shippingCost >= 0.0))
    displayInformation(spoolsOrdered, spoolsStock, shippingCost);
    // program ends if user input is invalid
    else
    exit(EXIT_FAILURE);

    return 0;
}

// function that reads the information from the user
void readInformation(int & spoolsOrdered, int & spoolsStock, char & shippingChoice, double & shippingCost)
{

    // reads in user input
    cin >> spoolsOrdered;
    cin >> spoolsStock;
    cin >> shippingChoice;

    // statements below checks the validity of the user's input
    if(spoolsOrdered >= 1)
    {
        cout << "Spools to be ordered" << endl;
    }
    else
    {
        cout << "Spools to be ordered" << endl;
        cout << "Spools order must be 1 or more" << endl;
        exit(EXIT_FAILURE);
    }

    if(spoolsStock >=0)
    {
        cout << "Spools in stock" << endl;
    }

    else
    {
        cout << "Spools in stock" << endl;
        cout << "Spools in stock must be 0 or more" << endl;
        exit(EXIT_FAILURE);
    }

    if(shippingChoice == 'y')
    {

        cin >> shippingCost;

        if(shippingCost >= 0.0)
        {
            cout << "Special shipping and handling (y or n)" << endl;
            cout << "Shipping and handling amount" << endl;

        }

        else
        {
            cout << "Special shipping and handling (y or n)" << endl;
            cout << "Shipping and handling amount" << endl;
            cout << "The spool shipping and handling charge must be 0.0 or more" << endl;
            exit(EXIT_FAILURE);
        }

    }

    else
    {
        shippingCost = 11.88;
        cout << "Special shipping and handling (y or n)" << endl;
    }

}

// function displays information on the spools ready to be shipped and and need to be ordered. Shows sub-total, total, and shipping price.
void displayInformation(int spoolsOrdered, int spoolsStock, double shippingCost)
{
    // declare new variables
    double subtotal, total;
    int spoolsReady;

    if(spoolsOrdered > spoolsStock)
    {
        cout << "Spools ready to ship: " << spoolsStock << endl;
        cout << "Spools on back-order: " << spoolsOrdered - spoolsStock << endl;
        spoolsReady = spoolsStock;
    }

    else if(spoolsOrdered < spoolsStock)
    {
        cout << "Spools ready to ship: " << spoolsOrdered << endl;
        cout << "Spools on back-order: 0" << endl;
        spoolsReady = spoolsOrdered;
    }

    else if(spoolsOrdered == spoolsStock)
    {
        cout << "Spools ready to ship: " << spoolsStock << endl;
        cout << "Spools on back-order: 0" << endl;
        spoolsReady = spoolsStock;
    }

    // converts the int value of spools ready to a double
    subtotal = static_cast<double>(spoolsReady*100);

    // converts the int value of spools ready to a double and multiply by the inputted or default shipping cost to find the new shipping cost
    shippingCost = static_cast<double>(spoolsReady) * shippingCost;

    // adds the subtotal and shipping cost to find the total value
    total = subtotal + shippingCost;

    cout << "Subtotal ready to ship: " << "$" << right << setw(10) << fixed << setprecision(2) << subtotal << endl;
    cout << "Shipping and handling: " << " $" << right << setw(10) << fixed << setprecision(2) << shippingCost << endl;
    cout << "Total shipping charges: " << "$" << right << setw(10) << fixed << setprecision(2) << total << endl;

}
