// 8_30_charString
// Michael Kasman CS 1336
#include <iostream>
#include <string> // For C++ string class

using namespace std;

/* Notes:
- char is a data type to represent a single character
- A char is stored in memory as an integer, which is its ASCII code
- Usually takes 1 byte in memory
- There are two types of strings in C++:
    1. C-string: A string literal (e.g. "Hello) is a C-string
    2. C++  string class: These can be handled like a variable
        - You can assign and reassign a string into a C++ string class
        - Stored in memory as a consecutive single character followed at the end by a null terminator
        - Should #include <string>
*/

int main()
{
    char myChar = '&'; // '&' is a character literal. It is represented within single quotes ('')
    char mySpace = ' ';

    cout << "myChar is " << myChar << ", mySpace is " << mySpace << endl;

    myChar = '*';

    cout << "myChar is " << myChar << ", mySpace is " << mySpace << endl;

    string firstName, lastName;

    firstName = "Michael";
    lastName = "Kasman";

    cout << "Ore wa " << firstName << mySpace << lastName << endl;

    firstName = "Main";
    lastName = "Character";

    cout << "Ore wa " << firstName << mySpace << lastName << endl;

    return 0;
}
