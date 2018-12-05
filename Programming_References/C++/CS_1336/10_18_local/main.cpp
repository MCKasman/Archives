//10_18_local
#include <iostream>

using namespace std;
void addTen();
/*
- Local variables are variables defined inside a function
- Local variables follow the usual scope rules and therefore are not accessible outside the function
- The other functions may have distinct local variables with the same name
*/

int main()
{
    double res = 1000; // res is a local variable
    cout << "Inside main, res = " << res << endl;
    addTen();
    cout << "Back from addTen, res = " << res << endl;
    return 0;
} // scope of res and num ends here

void addTen()
{
    double res = 500; // res and num are local variables
    cout << "Entered addTen, res = " << res << endl;
    // cout << "num = " << num << endl;

} // scope of res ends here
