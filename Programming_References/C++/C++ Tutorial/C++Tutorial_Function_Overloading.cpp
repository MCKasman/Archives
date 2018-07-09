#include <iostream>

using namespace std;

void printNumber(int x){
    cout << "I am printing an integer." << x << endl;
}

void printNumber(float x){
    cout << "I am printing a float." << x << endl;
}



int main(){
    int x = 1;
    float y = 2.4564;

    printNumber(x);
    printNumber(y);

    return 0;

    }







