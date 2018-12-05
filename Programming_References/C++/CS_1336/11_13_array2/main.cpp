// 11_13_array2

#include <iostream>

using namespace std;

/*
- An array is a collection of variables of the same type
- Each variable is an element of the array
- You have to define an array before you can use it
- To access an  element, use the array name + subscript enclosed in []
- First element has subscript zero
- Good practice: use a named constant for the size declarator
- Can use an integer expression as subscript to access an array element,
e.g. a variable
- Repeated actions on array elements can be performed with a loop
- Arrays can be initialized with an initialization list
- Arrays can be initialized with a partial initialization list: the missing values
are filled with zeroes
- Arrays can be implicitly sized with an initialization list: you do not
provide a value for the size declarator
*/

int main()
{
    const int NUM_SCORES = 4; // use a named constant for the size declarator
    double scores[NUM_SCORES];// Define an array of doubles of size NUM_SCORES
    const int NUM_STUDENTS = 5;


    for (int i = 0; i < NUM_SCORES; i++)
    {
        cout << "Enter score from judge " << (i+1) << ": ";
        cin >> scores[i]; // Use variable as subscript
        cout << "Score of judge " << (i+1) << " is " << scores[i] << endl;
    }

    int netID[NUM_STUDENTS] = {100, 200, 300, 400, 500}; // initialization list
    cout << endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
        cout << "netID of student " << (i+1) << " is " << netID[i] << endl;

    double GPA[NUM_STUDENTS] = {3.0, 3.1, 3.2}; // partial initialization
    cout << endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
        cout << "GPA of student " << (i+1) << " is " << GPA[i] << endl;

    double arr[] = {10.1, 10.2, 10.3}; // implicit sizing
    int sizeOfArr = sizeof(arr)/sizeof(double);
    cout << "Number of elements of arr = " << sizeOfArr << endl;

    cout << "Contents of arr" << endl;
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
