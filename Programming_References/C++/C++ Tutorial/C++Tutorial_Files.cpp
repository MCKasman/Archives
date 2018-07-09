#include <iostream> // add and read data
#include <fstream> // file input and output

using namespace std;

int main(){

    ofstream mkFile;
    mkFile.open("tuna.txt");

    mkFile << "I hate tuna!\n";


    return 0;

    }







