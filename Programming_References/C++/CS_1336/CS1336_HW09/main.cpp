/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/27/2018
Purpose of program: The program will prompt the user to enter a file name, read the content of the file, and print the highest and lowest value
in the file.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// function prototypes
bool highestFromFile(string &, double &);
bool lowestFromFile(string &, double &);

int main()
{
    // declare variables
    double highest, lowest;
    string inputFileName;

    // prompt the user for a file name
    cout << "Enter a file name: ";
    cin >> inputFileName;

    // function call to find the highest value from the input file
    highestFromFile(inputFileName, highest);

    // function call to find the lowest value from the input file
    lowestFromFile(inputFileName, lowest);

    // outputs the highest and lowest values
    cout << "Highest value is " << highest << endl;
    cout << "Lowest value is " << lowest << endl;

    return 0;

}

// function passes back the highest value through reference and returns true if the file can be opened
bool highestFromFile(string & inputFileName, double & highest)
{
    // open file input stream and declare variables
    ifstream fileOpen;
    double val1, val2, val3, val4, val5, val6, val7, val8;

    // open file
    fileOpen.open(inputFileName.c_str());

    // checks if file opens
    if(!fileOpen)
    {
        // displays error message if the file cannot be opened and exits in failure (returns false)
        cout << "Could not open file" << endl;
        exit(EXIT_FAILURE);
    }

    // if the the file is opened successfully, then it will find the highest value from the input file
    else
    {
        // store variables
        fileOpen >> val1 >> val2 >> val3 >> val4 >> val5>> val6 >> val7 >> val8;

        highest = val1;

        // "highest" variable value will be replaced by a value greater than the value stored in "highest"
        if(val2 > highest)
        highest = val2;

        if(val3 > highest)
        highest = val3;

        if(val4 > highest)
        highest = val4;

        if(val5 > highest)
        highest = val5;

        if(val6 > highest)
        highest = val6;

        if(val7 > highest)
        highest = val7;

        if(val8 > highest)
        highest = val8;

        return true;
    }

    // close file
    fileOpen.close();
}

// function passes back the lowest value through reference and returns true if the file can be opened
bool lowestFromFile(string & inputFileName, double & lowest)
{
    // open file input stream and declare variables
    ifstream fileOpen;
    double val1, val2, val3, val4, val5, val6, val7, val8;

    // open file
    fileOpen.open(inputFileName.c_str());

    // checks if the file opens
    if(!fileOpen)
    {
        // displays error message if the file cannot be opened and exits in failure (returns false)
        cout << "Could not open file" << endl;
        exit(EXIT_FAILURE);
    }

    // if the the file is opened successfully, then it will find the lowest value from the input file
    else
    {
        // store variables
        fileOpen >> val1 >> val2 >> val3 >> val4 >> val5>> val6 >> val7 >> val8;

        lowest = val1;

        // "lowest" variable value will be replaced by a value less than the value stored in "lowest"
        if(lowest > val2)
        lowest = val2;

        if(lowest > val3)
        lowest = val3;

        if(lowest > val4)
        lowest = val4;

        if(lowest > val5)
        lowest = val5;

        if(lowest > val6)
        lowest = val6;

        if(lowest > val7)
        lowest = val7;

        if(lowest > val8)
        lowest = val8;

        return true;
    }

    // close file
    fileOpen.close();
}
