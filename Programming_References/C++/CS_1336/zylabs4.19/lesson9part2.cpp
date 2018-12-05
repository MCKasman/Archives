/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/25/2018
Purpose of program: The program will read numbers from a file, validate the numbers, and calculate the average of all the valid numbers.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//function prototypes
double readInput(ifstream &, ofstream &, int &, int &, int &, double &);
double displayData(int &, int &, int &, double &);

int main()
{
    // declare and initialize variables
    int numberDigits= 0;
    int validValues = 0;
    int invalidValues = 0.00;
    double sumValues = 0;
    string inputFileName;
    ifstream fileOpen;

    // input file name by user
    cin >> inputFileName;

    // open the input file
    fileOpen.open(inputFileName.c_str());

    // checks if the file opens successfully
    if(!fileOpen)
    {
        cout << "File \"" << inputFileName << "\" could not be opened"<< endl;
        exit(EXIT_FAILURE);
    }

    // open the output file
    ofstream outputFile("invalid-numbers.txt");

    // checks if the file opens successfully
    if(!outputFile)
    {
        cout << "File \"invalid-numbers.txt\" could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Reading from file \"" << inputFileName << "\""<< endl;

    // function call to read the input from the input file
    readInput(fileOpen, outputFile, numberDigits, invalidValues, validValues, sumValues);

    // function call to display value data and the average of all valid values
    displayData(numberDigits, invalidValues, validValues, sumValues);

    // close files
    fileOpen.close();
    outputFile.close();

    return 0;

}

// function reads input from input file
double readInput(ifstream & fileOpen, ofstream & outputFile, int & numberDigits, int & invalidValues,int & validValues, double & sumValues)
{
    double integers;

    // while loop checks the validity of values
    while(fileOpen >> integers)
    {
        numberDigits++;

        // if the number is not valid, then it will increment the invalid values counter and be sent to the invalid value file
        if(integers < 0 || integers > 110)
        {
            outputFile << fixed << setprecision(2)<< integers << endl;
            invalidValues++;

        }

        // if the number is valid, then it will increment the valid values counter and be added to the sum of values
        else
        {
            validValues++;
            sumValues = sumValues + integers;
        }

    }

    return 0;
}

// function displays values and the average of all valid values
double displayData(int & numberDigits, int & invalidValues,int & validValues, double & sumValues)
{
    // displays the value data
    cout << "Total values: " << numberDigits << endl;
    cout << "Invalid values: "<< invalidValues << endl;
    cout << "Valid values: " << validValues << endl;

    // checks if there is at least 1 valid value inputted
    if(validValues == 0)
        cout << "An average cannot be calculated" << endl;

    // calculates the average and displays it if there is at least 1 valid value
    else
    {
        double average = sumValues/validValues;
        cout << "Average of valid values: " << fixed << setprecision(2)<< average << endl;

    }

    return 0;
}
