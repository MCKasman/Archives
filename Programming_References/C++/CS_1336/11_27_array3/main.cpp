#include <iostream>

using namespace std;

/*
- Partially filled arrays: When you don't know the exact size needed, you may oversize the array. The array may not be fully utilized
- You need to maintain a variable to track the number of elements actually used
*/
int main()
{
    const int MAX_SIZE = 10;
    double GPA[MAX_SIZE];
    double gpa;
    int index = 0;

    cout << "Enter GPA, -1 if done: ";
    cin >> gpa;

    while((gpa != -1) && (index < MAX_SIZE)) // be sure to check index value
    // avoid going out of bounds
    {
        GPA[index] = gpa;
        index ++;

        cout << "Enter GPA, -1 if done: ";
        cin >> gpa;
    }

    cout << "GPA" << endl;

    for(int i = 0; i < index; i++) // index is the variable that tracks
    // the number of elements actually used
    cout << GPA[i] << endl;

    return 0;
}
