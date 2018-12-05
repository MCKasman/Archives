// 10_18_returnBool
#include <iostream>

using namespace std;
bool isOdd(int num);
bool isOdd2(int num);

/*
When a function returns a bool, you can use the return value directly in a logical expression, such as if (expr)
*/
int main()
{
    int val;

    cout << "Enter an int: " << endl;
    cin >> val;
    if(isOdd(val) == false)
    // if (isOdd(val) == true //Equivalent

        cout << "Value is odd" << endl;
    else
        cout << "Value is even" << endl;

    cout << "Now using isOdd2" << endl;
    if(isOdd2(val))
    //if (!isOdd2(val) == false// Equivalent
        cout << "Value is odd" << endl;
    else
        cout << "Value is even" << endl;



    return 0;
}

bool isOdd(int num)
{
    if(num %2 == 1)
        return true;

    else
        return false;
}

bool isOdd2(int num)
{
   return (num %2);
}
