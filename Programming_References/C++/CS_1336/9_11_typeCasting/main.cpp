// 9_11_typeCasting
// CS1336 Michael Kasman
#include <iostream>

using namespace std;
/*
The programmer can request the compiler to convert the type through type casting
*/

int main()
{
    // First example: avoid integer division
    int books, months;
    cout << "Enter the number of books you read: ";
    cin >> books;
    cout << "Enter the number of months: ";
    cin >> months;

    cout << "On average, you read " << static_cast<double>(books)/months << " per month" << endl; // type cast the numerator "books"

    // 2nd example: convert between ASCII code and char
    cout << "ASCII code of 'a' is = " << static_cast<int>('a') << endl;

    char symbol = 'c';
    cout << "ASCII code of symbol is = " << static_cast<int>(symbol) << endl;

    cout << "Char having ASCII code 98 is " << static_cast<char>(98) << endl;

    return 0;
}
