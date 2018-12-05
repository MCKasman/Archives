// 12_4_arrayArgument2

#include <iostream>

using namespace std;
/*
- To pass an array as an argument to a function, you pass the array name
- The array name is the address of the array, nothing more
- If the function needs to know the sides of the array, you need to provide it in an additional argument
- The function operates (reads/writes) on the original array
- If the function is not supposed to modify the array, a good practice is to put "const" in front of the array in the function prototype
and function header
*/
void printArray(int [], int);
void printArray(double [], int);

int main()
{
    const int NUM_EMPLOYEES = 3;

    int hours[NUM_EMPLOYEES];
    double rate[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter hours and rate: ";
        cin >> hours[i] >> rate[i];
        cout << "Wage of employee " << (i+1) << " is " << hours[i] * rate[i] << endl;
    }

    cout << endl << "Hours" << endl;
    printArray(hours, NUM_EMPLOYEES);

    cout << endl << "Rate" << endl;
    printArray(rate, NUM_EMPLOYEES);

    return 0;
}

void printArray(int arr[], int siz)
{
    for (int i = 0; i < siz; i++)
        cout << arr[i] << endl;
}

void printArray(double arr[], int siz)
{
    for (int i = 0; i < siz; i++)
        cout << arr[i] << endl;
}
