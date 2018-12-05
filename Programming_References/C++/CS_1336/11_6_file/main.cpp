// 11_6_file

#include <iostream>
#include <fstream> // needed for file I/O
#include <cstdlib>

using namespace std;

/*
- A file can be a text file or a binary file
We focus on  text files
- A file can be sequential access or random access
In a sequential access file, to read a piece of data, you must first read all the data
that comes before it. In a random access file, you can jump directly to
the desired data. We focus on sequential access files.
- To use a file:
1. Open the file
2. Use the file (read or write). Program will interact with file through a file stream object
3. Close the file
- Should check for file open failure using if(fileStreamObjectNam.fail()) or if(!fileStreamObjectName)
- You can define a file stream object and open the file in the same statement
*/
int main()
{
    ifstream inFile; // Define a file stream object for input
    double num;
    string inputFileName, outputFileName, name;

    cout << "Enter input file name and output file name: ";
    cin >> inputFileName >> outputFileName;

    inFile.open(inputFileName.c_str()); // Open file
    if (inFile.fail()) // Check that file open was successful
    {
        cout << "Could not open input file" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream outFile(outputFileName.c_str()); // Define a file stream object for output and Open file
    // in the same statement
    if (!outFile) // Check that file open was successful
        // outFile is evaluated to false if there is something wrong with the
        // file stream object. In particular, that would be true if the file open failed
    {
        cout << "Could not open output file" << endl;
        exit(EXIT_FAILURE);

    }

    while(inFile >> num)
        // The stream extraction operator >> will return false when
        // there is a read error. When there is no more data to
        // read, it returns false
    {

        inFile >> name;
        cout << "num and name read from input file is " << num << ", " << name << endl;
        outFile << num << ", " << name << endl;
    }

    // Close the files
    inFile.close();
    outFile.close();

    return 0;
}
