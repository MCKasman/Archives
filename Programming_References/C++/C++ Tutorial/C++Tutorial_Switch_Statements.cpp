#include <iostream>

using namespace std;

int main(){

    int age;

    cout << "Enter your age:" << endl;
    cin >> age;

    switch(age){

    case 16:
        cout << "You can drive now." << endl;
        break;
    case 18:
        cout << "Buy some lottery tickets." << endl;
        break;
    case 21:
        cout << "You can buy beer!" << endl;
        break;

    default:
        cout << "Sorry you're too young to get any privilege." << endl;

    }

    return 0;

    }






