// 9_13_getLineCinGet
// CS 1336 Michael Kasman
#include <iostream>

using namespace std;

int main()
{
    string name;
    char ch;

    // Use getline to read the whole line
    cout << "Enter first name then last name: ";
    getline(cin, name);
    cout << "Names entered are " << name << endl;

    // Cannot use cin to pause the program
    cout << "\nHit enter to continue (use cin in the program): ";
    cin >> ch;
    cout << "Program resumed\n";

    //
    return 0;
}
