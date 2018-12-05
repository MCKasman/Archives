// 11_15_outOfBounds
#include <iostream>

using namespace std;
/*
- Be sure your index values are valid (between 0 and n-1) or else you will go out of bounds
- The compiler will not issue any warning or error
- The effect of going out of bounds is unpredictable: program may crash, freeze, give incorrect results, have elusive bugs, etc.
*/

int main()
{
    int arr[5];

    for(int i = 0; i < 1000; i++)
        arr[i] = 500;

    for(int i = 0; i < 1000; i++)
        cout << arr[i];

    return 0;
}
