#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;
   int sum;

   cout << "Enter a number! \n";
   cin >> x; // "cin" is the input stream object; ">>" is the input stream operator.

   cout << "Enter another number! \n";
   cin >> y;

   sum = x +y;

   cout << "The sum of these variables is " << sum << endl;

    return 0;


}
