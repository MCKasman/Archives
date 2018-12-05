// 10_23_global
#include <iostream>

using namespace std;

double PI = 3.1416; // Constant global variable
                    // will be protected against any modification
double calcArea(double r);
double calcCircumference(double r);

/*
- A global variable is a variable defined outside of any function
- The scope of a global variable begins at variable definition and ends at the end of the program
- Any function in the global variable's scope can access the global variable
- A good programming practice is to minimize the use of global variables, because they can be modified by mistake
by any function in the code
- Use the constant qualifier to prevent modification if possible
*/
int main()
{
    double radius,  area, perimter; // local variable
    cout << "Enter the radius: ";
    cin >> radius;
    area = calcArea(radius);
    cout << "Area is " << area << endl;
    perimter = calcCircumference(radius);
    cout << "Circumference is  " << perimter << endl;
    return 0;
}

double global2; // Another global variable
                // initialized to zero by default
                // scope begins and ends at the end of the program

double calcArea(double r)
{
    double res; // local variable
    cout << "local variable res before initialization = " << res << endl;
    res = PI*r*r; // can access PI
    cout << "Global2 = " << global2 << endl;
    return res;
}

double calcCircumference(double r)
{
    double res;
    res = 2*PI*r;
    return res;
}
