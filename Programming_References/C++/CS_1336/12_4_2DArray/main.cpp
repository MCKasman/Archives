// 12_4_2DArray

#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_STUDENTS = 4;
const int NUM_TESTS = 3;

void print2DArray(double [][NUM_TESTS], int);

int main()
{
    const int NUM_ROWS = 2;
    const int NUM_COLS = 3;
    int stud;
    double sum;
    double test;


    // definition of a 2D array
    double scores[NUM_STUDENTS][NUM_TESTS];

    for(int stud = 0; stud < NUM_STUDENTS; stud++)
    {
        for(int test = 0; test < NUM_TESTS; test++)
        {
            cout << "Enter the score of student " << (stud + 1) << " for test " << (test + 1) << ": ";
            cin >> scores[stud][test];
        }
    }

    // print the array
    /*
    for(int stud = 0; stud < NUM_STUDENTS; stud++)
    {
        cout << "Scores for student " << (stud + 1) << ": ";

        for(int test = 0; test < NUM_TESTS; test++)
        {
            cout << setw(7) << scores[stud][test];
        }
        cout << endl;
    }
    */

    print2DArray(scores, NUM_STUDENTS);

    // 2D array initialization
    int arr[NUM_ROWS][NUM_COLS] = {{10, 20, 30}, {100, 200, 300}};

    for(int i = 0; i < NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            cout << setw(7) << arr[i][j];
        }
        cout << endl;
    }

    int arr2[NUM_ROWS][NUM_COLS] = {{10, 20}, {}};

    for(int i = 0; i < NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            cout << setw(7) << arr2[i][j];
        }
        cout << endl;
    }

    // calculate the average score for a student
    sum = 0;
    cout << "Enter student number: ";
    cin >> stud;

    for(int test = 0; test < NUM_TESTS; test++)
    {
        sum += scores[stud][test];
    }

    cout << "Average is " << sum/NUM_TESTS << endl;

    // calculate the average score for a test
    sum = 0;
    cout << "Enter test number: ";
    cin >> test;

    for(int test = 0; stud < NUM_TESTS; stud++)
    {
        sum += scores[stud][test];
    }

    cout << "Average is " << sum/NUM_STUDENTS << endl;
    return 0;

}

void print2DArray(double arr[][NUM_TESTS], int nRows)
{
    for(int test = 0; test < nRows; test++)
    {
        for(int test = 0; test < NUM_TESTS; test++)
        {
            cout << setw(7) << arr[NUM_TESTS][test];
        }
        cout << endl;
    }
}
