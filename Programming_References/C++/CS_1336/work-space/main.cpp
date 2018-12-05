/*
 Programmer: Yug Singh
 Description of program: this program allows the user to enter in a present value, interest rate, and
 number of months and the program will calculate the future value of the investment.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
void readFunction(unsigned int &, unsigned int &);
void displayFunction(unsigned int &, unsigned int &);
using namespace std;

//prototypes for each function used in the program.
int main()
{
    unsigned int min, max;
    readFunction(min,max);
    while(min<32 || min>126 || max <32 || max>126)
    {
        if(min<32 || min>126 || max <32 || max>126)
        {
            cout <<"Values must be in range 32 to 126 inclusive\n";
            readFunction(min, max);
        }
    }
    if(min>=32 && min<=126 && max >32 && max<=126)
    {
        displayFunction(min, max);
    }
}
void readFunction(unsigned int & min, unsigned int & max)
{
    cout<< "Enter lower and upper values\n";
    cin >> min >> max;
}
void displayFunction(unsigned int & min, unsigned int & max)
{
    int characters;

    cout << "Characters for ASCII values between " << min <<" and "<< max <<endl;
    cout << "----+----+----+-\n";
    for(int number = min, row = 1; number <= max; number++, row++)
    {
        characters = row;

        if(row <= 16)
        {
            cout << static_cast<char>(number);
        }

        if(row == 16)
        {
            row = 0;
            cout << "\n";
        }
    }

    if(characters < 16)
    {
        cout << "\n----+----+----+-";
    }

    else
    {
        cout << "----+----+----+-";
    }
}
