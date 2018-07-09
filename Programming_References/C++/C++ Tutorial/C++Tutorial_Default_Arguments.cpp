#include <iostream>

using namespace std;

int volume (int l=1, int w=1, int h=1); // default argument; this will set the values of length, width, and height to 1 if the user does not input any values for them.

int main(){
    cout << volume() << endl;

    return 0;

    }

int volume (int l, int w, int h){

    return l*w*h;
}






