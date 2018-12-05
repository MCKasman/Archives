// 11_8_breakContinue

#include <iostream>

using namespace std;
/*
- With the break statement you exit the loop unconditionally
- With the continue statement, you go to the end of the loop body and prepare for the next iteration
- When there is a continue statement, the "for" loop and the "while" loop are not necessarily equivalent
- Use break and continue statement sparingly, they make the code hard to read
*/

int main()
{
    int num = 0;
    cout << "Loop without break and continue" << endl;


    while(num <5)
    {
        num++;
        cout << "num = " << num << endl;
    }

    cout << "Loop with break and continue at num = 3" << endl;
    num = 0;
    while(num <5)
    {
        num++;
        if(num ==3)
        break;

        cout << "num = " << num << endl;
    }

    cout << "Loop with continue at num = 3" << endl;
    num = 0;
    while(num <5)
    {
        num++;
        if(num ==3)
        continue;

        cout << "num = " << num << endl;
    }

    cout << endl << "For loop and while loop with continue" << endl;
    for(num = 1; num < 6; num++)
    {
        cout << "num = " << num << endl;
        if(num == 3)
        continue;
    }

    num = 1;
    while(num < 6)
    {
        cout << "num = " << num << endl;
        if(num == 3)
        continue;
        num ++;
    }
    return 0;
}
