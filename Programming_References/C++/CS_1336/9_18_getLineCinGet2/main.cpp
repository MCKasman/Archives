// 9_13_getLineCinGet2
// CS 1336 Michael Kasman
#include <iostream>
/*
- cin uses whitespaces (spaces, tabs, newlines) as delimiters for data items
- cin does not work if you need to read a data item that contains whitespaces
- Other mechanisms to read from the standard input: getline, cin.get
- getline reads all the characters, including whitespaces, until a newline
Use getine to read the whole line
- each cin.get() will read a single character, does not skip any character
cin.get comes in 3 flavors: cin.get(); cin.get(ch); ch = cin.get();
- After a cin is executed, there is a left over character in the keyboard buffer (newline)
- Because of the left over character (newline), there are times where this may cause a problem
e.g. if you have a getline after a cin, getline, will read the newline as an empty string followed by newline, and does not wait for the user to enter anything.
Same problem with cin followed by cin.get.
-To fix the problem, you need to flush the buffer by using cin.ignore(), cin.get(), or getline().
*/
using namespace std;

int main()
{
    string name;
    char ch1, ch2, ch3, ch4;
    double hours, rate;

    // Use getline to read the whole line
    cout << "Enter first name then last name: ";
    getline(cin, name);
    cout << "Names entered are " << name << endl;

    // Cannot use cin to pause the program
    cout << "\nHit enter to continue (use cin in the program): ";
    cin.get();
    cout << "Program resumed\n";

    // Example of cin.get()
    cout << "Enter three characters, followed by Enter: ";
    cin.get(ch1);
    cin.get(ch2);
    ch3 = cin.get();
    ch4 = cin.get();
    cout << "Characters entered are: \n";
    cout << '*' << ch1 << '*' << endl;
    cout << '*' << ch2 << '*' << endl;
    cout << '*' << ch3 << '*' << endl;
    cout << '*' << ch4 << '*' << endl;

    // Flush the keyboard buffer after a cin and before a cin.get or a getline
    cout << "Enter hours and rate: ";
    cin >> hours >> rate;
    cout << "Enter employee's name: ";
    cin.ignore(); // Flush the buffer of left over \n character
    // other options are cin.get() and getline
    getline(cin, name);
    cout << "Emplyee name: " << name << ", salary: " << hours * rate << endl;


    return 0;
}
