/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/11/2018
Purpose of program: The program will be reading sales information from a file and writing out a bar chart for each of the stores. The
bar charts will be created by writing out a sequence of X characters.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>


using namespace std;

// function prototypes
int readInput(ifstream &, ofstream &, unsigned int &, long long int &);
void displaySales(ifstream &, ofstream &, unsigned int &, long long int &);

int main()
{
    // declare and initialize variables
    unsigned int storeNumber;
    long long int salesValue;
    string inputFileName, outputFileName;
    ifstream fileOpen;

    // display for manual user test
    // cout << "Enter input file name and output file name: ";

    // user input for input file name
    cin >> inputFileName; // >> outputFileName;

    // open input file name
    fileOpen.open(inputFileName.c_str());

    // checks if input file can be opened
    if(!fileOpen)
    {
        cout << "File \"" << inputFileName << " \"could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    // opens output file
    ofstream outputFile("saleschart.txt");

    // checks if output file can be opened
    if(!outputFile)
    {
        cout << "File \"saleschart.txt\" could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    // function call to displaySales function
    displaySales(fileOpen, outputFile, storeNumber, salesValue);

    // function call to readInput function
    readInput(fileOpen, outputFile, storeNumber, salesValue);

    // close files
    fileOpen.close();
    outputFile.close();

    return 0;
}

// validates the inputs in the file as long as there is data being read in the file
int readInput(ifstream & fileOpen, ofstream & outputFile ,unsigned int & storeNumber, long long int & salesValue)
{
    while(fileOpen >> storeNumber >> salesValue)
    {

        if((storeNumber < 1) || (storeNumber > 99))
        {
            cout << "The store number " << storeNumber << " is not valid" << endl;
            continue;
        }

        if(salesValue < 0)
        {
            cout << "The sales value for store " << storeNumber << " is negative" << endl;
            continue;
        }

    }

    return 0;

}

// displays the sales value based on the data in .txt file of each store sale value
void displaySales(ifstream & fileOpen, ofstream & outputFile, unsigned int & storeNumber, long long int & salesValue)
{
    // legend for the symbol X outputted to the output file
    outputFile << "SALES BAR CHART" << endl;
    outputFile << "(Each X equals 1,000 dollars)" << endl;

    // while loop to output each store information
    while(fileOpen >> storeNumber >> salesValue)
    {
        outputFile << "Store " << setw(2) << right << storeNumber << ": ";
        salesValue = salesValue/1000;

        for(int i = 1; i <= salesValue; i++)
        {
            outputFile << "X";
        }

        outputFile << endl;
    }

}
