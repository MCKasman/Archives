#include <iostream>

using namespace std;

void printScreen(); //proto-typing a function; telling the compiler to know that the function exist in the program when called earlier before being processed.

int main()
{
    printScreen();
    return 0;
}

void printScreen(){     //void completes function but does not return any value, only prints something out.
                        // "()" are parameters
    cout << "Void text on the screen" << endl;

}

