#include <iostream>

using namespace std;

class FirstClass{ // Declaring a class.
    public: // Makes stuff in FirstClass be able to be used in other functions.
        void coolSaying(){
            cout << "Hello World!" << endl;
        }


};

int main()
{
    FirstClass cabinObject; // Object is "cabinObject."
    cabinObject.coolSaying();

    return 0;
}


