// 11_27_arrayArgument
#include <iostream>

using namespace std;

// function prototypes
void printArray(int, int);
void printArrayDouble(double, int);

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double rate[NUM_EMPLOYEES];

    for(int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter hours and rate: ";
        cin >> hours[i] >> rate [i];
        cout << "Wage of employee " << (i+1) << " is " << hours[i] * rate[i];
    }

    cout << endl << "Hours" << endl;
    printArray(hours, NUM_EMPLOYEES);

    cout << endl << "Rate" << endl;
    printArrayDouble(rate, NUM_EMPLOYEES);

    return 0;
}

void printArray(int arr[], int siz)
{
    for(int i = 0; i < siz; i++)
    {
        cout << arr[i] << endl;
    }
}

void printArrayDouble(double arr[], int siz)
{
    for(int i = 0; i < siz; i++)
    {
        cout << arr[i] << endl;
    }
}
