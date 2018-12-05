/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/10/2018
Purpose of program: The program will ask for the weight of a package and the distance it will be shipped, then will display the
shipping charge.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// declare function prototypes
double getWeight();
int getDistance();
double calculateCharges(double, double);

int main()
{
    // declare and initialize variables
    // MY_SENTINEL loops the operation until the user enters 2 for the choice input
    const int MY_SENTINEL = 2;
    int choice = 0;
    int distance;
    double weight, shippingCost;

    cout << "1-> Ship package, 2-> Quit: ";
    cin >> choice;

    // selects choice from the user (1: calculates shipping cost & 2: exits the program)
    while((choice != MY_SENTINEL))
    {
        // function call for the weight inputted by the user
        weight = getWeight();

        // function call for the distance inputted by the user
        distance = getDistance();

        // function call to calculate the shipping charge with the weight and distance inputted by the user
        shippingCost = calculateCharges(weight, distance);

        // outputs the shipping charge to the user
        cout << "The shipping charge is $" << fixed << setprecision(2) << shippingCost << endl;

        cout << "\n";

        // asks the user to find the shipping charge of another shipment or to exit the program
        cout << "1-> Ship package, 2-> Quit: ";
        cin >> choice;
    }

    // end of program, output if the user selects 2
    cout << "Exiting" << endl;

    return 0;
}

// function receives the weight the user inputs
double getWeight()
{
    // declare and initialize variables
    // MAX_WEIGHT is the max weight a package can be
    // MIN_WEIGHT is the minimum weight a package has to be
    const double MAX_WEIGHT = 20;
    const double MIN_WEIGHT = 1;
    int num = 0;
    double weight;

    cout << "Enter the weight of the package in kilograms (max 20 Kg): ";
    cin >> weight;
    cout << "Weight entered is " << fixed << setprecision(2) << weight << endl;

    // input validation for weight (must be between the minimum and maximum weight values)
    while((weight < MIN_WEIGHT) || (weight > MAX_WEIGHT))
    {
        num++;

        cout << "Weight is invalid, must be between 0 and 20 kg, please reenter: ";
        cin >> weight;

        // checks if the weight input operation has looped 5 times after the first input
        // if the operation has looped 5 times since the first input, then the program is terminated
        if(num ==5)
        {
            cout << "Too many invalid attempts, exiting";
            exit(EXIT_FAILURE);
        }

    }

    return weight;
}

// function receives the distance the user inputs
int getDistance()
{
    // declare and initialize variables
    // MAX_DISTANCE is the maximum distance the package can be shipped
    // MIN_DISTANCE is the minimum distance the pack has to be shipped
    const int MAX_DISTANCE = 3000;
    const int MIN_DISTANCE = 10;
    int num = 0;
    int distance;

    cout << "Enter the distance to be shipped: (min 10 Mi, max 3000 Mi): ";
    cin >> distance;
    cout << "Distance entered is " << distance << endl;

    // input validation for distance (must be between the minimum and maximum distance values)
    while((distance < MIN_DISTANCE) || (distance > MAX_DISTANCE))
    {
        num++;

        cout << "Distance must be between 10 and 3000 miles, please reenter: ";
        cin >> distance;

        // checks if the distance input operation has looped 5 times after the first input
        // if the operation has looped 5 times since the first input, then the program is terminated
        if(num ==5)
        {
            cout << "Too many invalid attempts, exiting";
            exit(EXIT_FAILURE);
        }

    }

    return distance;
}

// functions calculates the shipping cost from the user's inputs of the package's weight and distance being shipped
double calculateCharges(double weight, double distance)
{
    // declare and initialize variables
    // variables declared and initialized in snake case are rates specific to the weight of the package
    double RATE_OF_PACKAGE_2_KG_OR_LESS = 1.10;
    double RATE_OF_PACKAGE_2_KG_TO_6_KG = 2.20;
    double RATE_OF_PACKAGE_6_KG_TO_10_KG = 3.70;
    double RATE_OF_PACKAGE_10_KG_TO_20_KG = 4.80;
    int roundedMultiple;
    double shippingCost;

    // roundedMultiple determines how many times the rate is multiplied based on every 500 miles traveled
    roundedMultiple = ((distance - 1)/ 500) + 1;

    // calculates shipping cost if the package is less than 2 kg
    if((weight <= 2))
        shippingCost = RATE_OF_PACKAGE_2_KG_OR_LESS * roundedMultiple;

    // calculates shipping cost if the package is between 2 kg to 6 kg
    else if((weight > 2) || (weight <= 6))
        shippingCost = RATE_OF_PACKAGE_2_KG_TO_6_KG * roundedMultiple;

    // calculates the shipping cost if the package is between 6 kg to 10 kg
    else if((weight > 6) || (weight <= 10))
        shippingCost = RATE_OF_PACKAGE_6_KG_TO_10_KG * roundedMultiple;

    // calculates the shipping cost if the package is between 10 kg to 20 kg
    else if((weight > 10) || (weight <= 20))
        shippingCost = RATE_OF_PACKAGE_10_KG_TO_20_KG * roundedMultiple;

    return shippingCost;
}
