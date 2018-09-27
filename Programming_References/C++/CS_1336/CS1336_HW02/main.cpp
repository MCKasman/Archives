/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 9/7/2018
Purpose of program: The program reads the data inputted by the user, stores it in a separate variable, and
prints the value entered by the user. Then the program calculates the average of the 3 test scores and
stores the result into another variable. Then displays the student’s first and last name, and the
average test score from reading the variables.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables being used in the program
    string firstName, lastName; // declares the first and last name variables, user inputs of the name will be stored in these two variables
    double test_1, test_2, test_3, testAverage; // declares test scores 1 - 3, user inputs of the test scores will be stored in these variables

    // output 1
    cout << "Please enter the student's first name: ";
    cin >> firstName;

    cout << "First name entered is " << firstName << endl;

    cout << "Please enter the student's last name: ";
    cin >> lastName;

    cout << "Last name entered is " << lastName << endl;

    cout << "Please enter the student's test 1 score: ";
    cin >> test_1;

    cout << "Test 1 score entered is " << test_1 << endl;

    cout << "Please enter the student's test 2 score: ";
    cin >> test_2;

    cout << "Test 2 score entered is " << test_2 << endl;

    cout << "Please enter the student's test 3 score: ";
    cin >> test_3;

    cout << "Test 3 score entered is " << test_3 << endl;

    // output 2
    testAverage = (test_1 + test_2 + test_3)/3.0; // takes the average of all 3 test scores

    cout << "\nThe test average of " << firstName <<" " << lastName << " is " << testAverage << endl;

    // output 3
    cout << "\nPlease enter the student's first name: " << firstName;

    cout << "\nFirst name entered is " << firstName << endl;

    cout << "Please enter the student's last name: " << lastName;

    cout << "\nLast name entered is " << lastName << endl;

    cout << "Please enter the student's test 1 score: " << test_1;

    cout << "\nTest 1 score entered is " << test_1 << endl;

    cout << "Please enter the student's test 2 score: " << test_2;

    cout << "\nTest 2 score entered is " << test_2 << endl;

    cout << "Please enter the student's test 3 score: " << test_3;

    cout << "\nTest 3 score entered is " << test_3 << endl;

    cout << "The test average of " << firstName <<" " << lastName << " is " << testAverage << endl;

    return 0;
}
