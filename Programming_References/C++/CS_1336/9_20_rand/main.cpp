// 9_20_rand
#include <iostream>
#include <ctime>
#include <cstdlib>

/*
rand returns a pseudo random number. It is not really random because
if you run the same program again, you get the same numbers
The programmer can set the seed to change the numbers. This is done
through srand(seed).
A convenient way to get a different seed value each time is to use time(0)
rand() gives a random number in the range from [0, INT_MAX]
To generate a random number in a different range, do scaling and shifting
*/
using namespace std;

int main()
{
    unsigned int mySeed = time(0);
    cout << "Time elapsed since Jan 1, 1970: " << mySeed << " seconds" << endl;

    srand(mySeed);

    cout << "Here are 5 random numbers after I set the seed:\n";
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    // Rolling dice
    cout << "\nRolling dice\n";
    cout << rand()%6 + 1 << endl; //% does the scaling. and + does the shifting
    cout << rand()%6 + 1 << endl;
    cout << rand()%6 + 1 << endl;
    cout << rand()%6 + 1 << endl;
    cout << rand()%6 + 1 << endl;
    return 0;
}
