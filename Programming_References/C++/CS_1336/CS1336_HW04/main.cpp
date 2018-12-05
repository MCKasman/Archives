/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 8/4/2018
Purpose of program: The program prompts the user to enter the names of two primary colors to mix. If the user
enters anything other than a primary color, or if the user enters two similar primary colors, the program
will display an error message and terminate. Otherwise, the program should display the name of the
secondary color that resultfs from mixing the two primary colors.
*/
#include <iostream>

using namespace std;

int main()
{
    // declare and initialize variables
    const int RED = 1;
    const int BLUE = 2;
    const int YELLOW = 3;

    int color1, color2;

    // asks input from the user
    cout << "Enter your two primary colors: 1 for red, 2 for blue and 3 for yellow: ";
    cin >> color1;
    cin >> color2;
    cout << "You entered " << color1 << ", " << color2 << endl;

    // checks the resulting secondary colors from the user's input
    if((color1 == color2) || (color1 < RED) || (color2 < RED) || (color1 >YELLOW)|| (color2 > YELLOW)){
        cout << "Invalid colors" << endl;
    }

    else if((color1 == RED) && (color2 == BLUE)){
        cout << "Primary colors are red and blue, resulting secondary color is purple";
    }

    else if((color1 == RED) && (color2 == YELLOW)){
        cout << "Primary colors are red and yellow, resulting secondary color is orange";
    }

    else if((color1 == BLUE) && (color2 == RED)){
        cout << "Primary colors are blue and red, resulting secondary color is purple";
    }

    else if((color1 == BLUE) && (color2 == YELLOW)){
        cout << "Primary colors are blue and yellow, resulting secondary color is green";
    }

    else if((color1 == YELLOW) && (color2 == RED)){
        cout << "Primary colors are yellow and red, resulting secondary color is orange";
    }

    else{
        cout << "Primary colors are yellow and blue, resulting secondary color is green";
    }

}
