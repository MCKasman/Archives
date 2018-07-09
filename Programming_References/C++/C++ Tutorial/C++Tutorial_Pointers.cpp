#include <iostream>

using namespace std;

int main(){
    int fish = 5;
    cout << &fish << endl; // Address operator

    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;

    return 0;

    }







