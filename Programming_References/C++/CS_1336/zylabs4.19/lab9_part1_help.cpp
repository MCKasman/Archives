// Mansi Pedireddy 11/18/2018
//This program will be reading sales information from a file and writing out a bar chart for each of the stores. The bar charts will be created by writing out a sequence of X characters. This program will be opening and closing files, use functions, and loops.


using namespace std;
#include <iostream>
#include <fstream>// for file I/O
#include <iomanip>// for setprecision()

// function parameters
int readData(unsigned int&, long long int&, ofstream&,ifstream & inputFile);
void displayData(ofstream&,ifstream & inputFile);

//The main function will read in a file name from cin.open the input file. open an output file called saleschart.txt. You will write the bar char headings and data to this file.then have a processing loop that will call the read function. The processing loop will read the input data and process it until it gets and end of file indication from the read function.
int main()
{
    unsigned int storeNumber;
    long long int storeValue;

    ifstream inputFile; // Define a file stream object for input
    string fileName;

    cin >> fileName;
    inputFile.open(fileName); // Open file

    if (inputFile.fail()) // Check that file open was successful
    {
        cout << "File \"" << fileName << "\" could not be opened"<< endl;
        inputFile.close();
        exit (EXIT_FAILURE);
    }
    ofstream outputFile;
    outputFile.open("saleschart.txt"); // Define a file stream object for output and Open file

    if(outputFile.fail())
    {
        cout << "File \"saleschart.txt\" could not be opened" << endl;
        outputFile.close();
        exit (EXIT_FAILURE);

    }
    else
    {
        displayData(outputFile, inputFile); // call to function
        readData(storeNumber, storeValue, outputFile, inputFile);

    }

    return 0;
}// end of main function

//The read function will return a value of true if data has been read, and will return a value of false if you have reached end of file.
int readData(unsigned int & storeNumber, long long int & storeValue, ofstream & outputFile, ifstream & inputFile)
{

    while (inputFile >> storeNumber >> storeValue)
    {
        if ((storeNumber < 1) || (storeNumber > 99)) // checks if the store number is less than 1 or greater than 99
        {
            cout << "The store number " << storeNumber << " is not valid" << endl;
            continue;
        }
        if ((storeValue < 0))
        {
            cout << "The sales value for store " << storeNumber << " is negative"<< endl;
            continue;

        }
        outputFile << "Store " << setw(2) << right << storeNumber << ": ";
        storeValue = storeValue/1000;

        for (int count= 1; count <=storeValue; count++) // will loop as long as count is less than or equal to store value.
        {
            outputFile << "X";

        }
        outputFile << endl;

    }
    return 0;

}// end of read data function

void displayData(ofstream & outputFile, ifstream & inputFile) // displays the headings  for the sales bar
{
    outputFile << "SALES BAR CHART"<< endl;
    outputFile << "(Each X equals 1,000 dollars)" << endl;

}// end of display data function
