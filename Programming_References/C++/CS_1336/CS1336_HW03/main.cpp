// CS1336_HW03
// CS 1336 Michael Kasman
/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 9/24/2018
Purpose of program: The program calculates a theater’s gross and net box office profit for a
night. The program prompts the user to input the title of the movie, how many adult and child
tickets were sold, and the theater’s location, in that order. The price of an adult ticket is $10.75 and a
child’s ticket is $6.35. It displays a revenue report as the last output. The theater
keeps 20 percent of the gross box office profit, while the rest goes to the movie distributor.
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // declare and initialize variables
    double percentage = 0.20;
    double a_cost = 10.75; // adult ticket cost
    double c_cost = 6.35; // child ticket cost

    string movie, location;
    int a_tickets, c_tickets;
    double gross, net, distributor;

    // output 1
    cout << "Please enter the movie title: ";
    getline(cin, movie);
    cout << "Movie title is " << movie <<endl;

    cout << "Please enter the number of adult tickets sold: ";
    cin >> a_tickets;
    cout << "Number of adult tickets sold is " << a_tickets << endl;

    cout << "Please enter the number of child tickets sold: ";
    cin >> c_tickets;
    cout << "Number of child tickets sold is " << c_tickets << endl;

    cin.ignore(); // ignores the previous getline function

    cout << "Please enter the theater's location: ";
    getline(cin, location);
    cout << "Theater location is " << location << endl;

    // output 2
    // setprecision() sets how many decimal points you will have and the "fixed" is just because when you use double it converts it to scientific mode
    gross = (a_cost*a_tickets)+(c_cost*c_tickets);
    cout << "Gross profit is $" << setprecision(2) << fixed << gross << endl;

    net = gross * percentage;
    cout << "Net profit is $" << setprecision(2) << fixed << net << endl;

    distributor = gross - net;
    cout << "Distributor profit is $" << setprecision(2) << fixed << distributor << endl;

    // output 3
    cout << "\nRevenue Report\n==============";
    cout << setw(29) << left <<"\nMovie Name:" << right << setw(9) << movie; // Left and right alignment used
    cout << setw(29) << left <<"\nTheater Location: " << right << setw(9) << location;
    cout << setw(29) << left <<"\nAdult Tickets Sold: " << right << setw(9) << a_tickets;
    cout << setw(29) << left <<"\nChild Tickets Sold: " << right << setw(9) << c_tickets;
    cout << setw(29) << left <<"\nGross Box Office Profit: " << "$" << right << setw(8) << gross;
    cout << setw(29) << left <<"\nNet Box Office Profit: " <<  "$" << right << setw(8) << net;
    cout << setw(29) << left <<"\nAmount Paid to Distributor: " << "$" << right << setw(8) << distributor << endl;

    return 0;
}
