// mansi Pedireddy 11/18/18
// this program will be reading numbers from a file. It will validate the numbers and calculate the average of all of the valid numbers.This program uses files, functions and loops.

#include <fstream> // for file I/O
#include <iostream>
#include <iomanip> // for setprecision()
#include <string>

using namespace std;

//function prototypes
double readData(int&, int&, int&,double & sumValues, ofstream & fileOutput,ifstream & fileInput);
double displayData(int&, int&, int&,double & sumValues ,ofstream & fileOutput,ifstream & fileInput);

int main()
{
    int totalValues, validValues, invalidValues;
    double sumValues;
    ifstream fileInput; // Define a file stream object for input
    string fileName;

    cin >> fileName;
    fileInput.open(fileName);
    if (fileInput.fail()) // Check that file open was successful
    {
        cout << "File \"" << fileName << "\" could not be opened"<< endl;
        fileInput.close();
    }
    else{


        cout << "Reading from file \"" <<fileName << "\""<< endl;
        ofstream fileOutput;
        readData(totalValues,validValues,invalidValues,sumValues,fileOutput, fileInput); // call to function
        displayData(totalValues,validValues,invalidValues,sumValues,fileOutput, fileInput);

    return 0;
    }

}// end of main function

double readData(int & totalValues, int & validValues,int & invalidValues,double & sumValues, ofstream & fileOutput,ifstream & fileInput)// reads the values as reference
{
    totalValues =0;
    validValues =0;
    invalidValues= 0.00;

    double fileValues;
    sumValues = 0;
    double average = 1;


    //ofstream fileOutput;

    fileOutput.open("invalid-numbers.txt");
    while(fileInput >> fileValues) //while loop to to take in values from the file
    {
        totalValues++;
        if(fileValues < 0 || fileValues > 110)
        {
            fileOutput << fixed << setprecision(2)<<fileValues << endl;
            invalidValues++;

            }else
            {
                sumValues = sumValues + fileValues;
                validValues++; //increases the invalid values by 1
            }
    }

    return 0;
}// end of read data function

double displayData(int & totalValues, int & validValues,int & invalidValues, double & sumValues,ofstream & fileOutput, ifstream & fileInput)
{
    double average = 1;

    cout << "Total values: "<< totalValues << endl;
    cout << "Invalid values: "<< invalidValues << endl;
    cout << "Valid values: " <<validValues << endl;
    if (validValues == 0) // if the valid values equal 0 then the following will be excucuted.
    {
        cout << "An average cannot be calculated"<< endl;

    }
    else
    {
        average = sumValues/validValues; // formula for average
        cout << "Average of valid values: " << fixed << setprecision(2)<< average<< endl;

    }
    fileInput.close();
    fileOutput.close();

    return 0;
}// end of display data function
