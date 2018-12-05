/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/11/2018
Purpose of program: The program will output the characters that map to the ASCII codes 32 through 126 through reading
in two unsigned integer values, and then will display the characters that map to the range of integer values.
*/

#include <iostream>

using namespace std;

// declare function prototypes
void readValues(unsigned int &, unsigned int &);
void displayValues(unsigned int, unsigned int);

int main()
{
    // declare lower and upper value variables
    unsigned int lowerValue, upperValue;

    // function call to receive the lower and upper values inputted by the user
    readValues(lowerValue, upperValue);

    // function call outputs the ASCII characters based off the user's lower and upper value inputs
    displayValues(lowerValue, upperValue);

}

// function reads the inputs of the lower and upper values from the user
void readValues(unsigned int & lowerValue, unsigned int & upperValue)
{
    // declare and initialize minimum and maximum value variables
    // the minimum value inputted must be 32
    // the maximum value inputted must be 126
    unsigned int MIN_VALUE = 32;
    unsigned int MAX_VALUE = 126;

    // prompts the user to enter lower and upper values and stores them in the declared reference variables
    cout << "Enter lower and upper values" << endl;
    cin >> lowerValue;
    cin >> upperValue;

    // input validation:
    // - checks whether the values inputted by the user are between 32 to 126
    // - checks whether the lower value is not greater than the upper value
    while(((lowerValue < MIN_VALUE) || (lowerValue > MAX_VALUE)) || ((upperValue < MIN_VALUE) || (upperValue > MAX_VALUE)) || (lowerValue > upperValue))
    {
        // if the user's inputs are invalid, then the while loop will prompt the user to reenter the values again
        cout << "Values must be in range 32 to 126 inclusive" << endl;
        cout << "Enter lower and upper values" << endl;
        cin >> lowerValue;
        cin >> upperValue;
    }
}

// function displays the ASCII characters based off the user's lower and upper values inputted
void displayValues(unsigned int lowerValue, unsigned int upperValue)
{
    // declare variable
    // newLine variable declared to check the value of character in each line
    int newLine;

    // shows the range of values inputted
    cout << "Characters for ASCII values between " << lowerValue << " and " << upperValue << endl;
    cout << "----+----+----+-" << endl;

    // for loop displays ASCII characters
    // the first ASCCI character displayed is the lower value
    // the number of characters in each line is counted by the number of loops that has occurred
    // the loop ends when the numStart value is over the upper value inputted by the user
    for(int numStart = lowerValue, numValues = 1; numStart <= upperValue; numStart++,numValues++)
    {
        // declare and initialize valueASCII to the start number of each loop
        int valueASCII = numStart;

        // convert valueASCII into a char variable
        char ASCII = static_cast<char>(valueASCII);
        cout << ASCII;

        // stores the number of ASCII characters in each line into the newLine variable declared outside of the for loop
        newLine = numValues;

        // if there are 16 ASCII characters in a line, the number of ASCII characters stored in each line is reset and a new line is created
        if(numValues == 16)
        {
            numValues = 0;
            cout << "\n";
        }
    }

    // the if-statement checks the last line of ASCII characters
    // if there are more less than or 15 ASCII characters in the last line outputted from the for loop, then the if-statement will create a new line for the end boundary output
    if(newLine <= 15)
        cout << "\n----+----+----+-" << endl;

    // if there are 16 characters in the last line, then the else-statement will just print the end boundary output
    else
        cout << "----+----+----+-" << endl;
}
