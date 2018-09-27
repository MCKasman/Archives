// 9_18_math
#include <iostream>
#include <cmath>
#include <cstdlib>
/*
C has a library of math functions, need #include <cmath> rand()generates a random int between 0 and INT_MAX
*/

using namespace std;

int main()
{
    double x;
    cout << "Enter an argument for cos: " << endl;
    cin >> x;
    cout << "Cos is " << cos (x) << endl;

    // rand()
    cout << "\nHere are 5 random numbers: " << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    // srand()
    unsigned int seed = time(0);
    cout << "Time elapsed since Jan 1, 1970: " << seed << "seconds" << endl;
    srand (seed);

    cout << "\n Here are 5 random numbers after srand(): " << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}
