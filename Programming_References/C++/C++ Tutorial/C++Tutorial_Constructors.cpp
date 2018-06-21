#include <iostream>
#include <string> // includes the string data type

using namespace std;

class FirstClass{
    public:
        FirstClass(string z){ // constructor name
           setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }

    private:
        string name;

};

int main()
{
    FirstClass bo("Bill Nye");

    cout << bo.getName();

    FirstClass bo2("Neil Degrass Tyson");

    cout << bo2.getName();

    return 0;
}


