#include <iostream>
#include <string> // includes the string data type

using namespace std;

class FirstClass{
    public:
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
    FirstClass bo;
    bo.setName("Micahel Kasman");

    cout << bo.getName();

    return 0;
}


