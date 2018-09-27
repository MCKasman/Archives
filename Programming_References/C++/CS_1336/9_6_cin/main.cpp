// 9_6_cin
// Michael Kasman
#include <iostream>

using namespace std;

/*
- cin is used to read data from the standard input
- By default the standard input is the keyboard
- Usually the program should prompt the user for input
- To read multiple data items, can use a single cin statement, or multiple cins
*/
int main()
{
    int id;
    double GPA, weightedGPA;
    char status;


    cout << "Enter the id, GPA and status, U for undergrad, G if grad: " << endl;
    cin >> id >> GPA >> status;

    cout << "Id is " << id << ", GPA is " << GPA << ", status is " << status << endl;

    // Can cout an expression
    cout << "Weighted GPA is " << GPA * 1.1 << endl;

    // Can use an expression in an assignment
    weightedGPA = GPA * 1.1;
    cout << "Value of weighted GPA is " << weightedGPA << endl;

    return 0;
}

