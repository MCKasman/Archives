/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/23/2018
Purpose of program: The program  prompts the user to enter traffic accident statistics for four geographic regions:
north, south, east, and west. Then displays a menu that lets the user choose from the safest, least safe, and all regions.
*/

#include <iostream>
#include <string>
using namespace std;

// function receives the total accidents of a region
int getAccidentTotal(string region)
{
    int accidents;

    cout << "Enter the accident total for the " << region << " region: ";
    cin >> accidents;
    cout << "Accident total entered for " << region << " region is " << accidents << endl;

    return accidents;

}

// function receives the choice of the user
int getChoice()
{
    int choice;

    cout << "Menu" << endl;
    cout << "----" << endl;
    cout << "1->Display safest region, 2-> Display least safe region, 3-> Display all" << endl;
    cin >> choice;

    return choice;

}

// function finds the safest region based off the user's inputs of the total accidents in each region
void findSafest(int north, int south, int east, int west)
{
    int safest = north;
    string region = "north";

    // finds the region with the least accidents
    if(south < safest)
    {
        safest = south;
        region = "south";
    }
    if (east < safest)
    {
        safest = east;
        region = "east";
    }
    if(west < safest)
    {
        safest = west;
        region = "west";
    }

    cout << "Region " << region << " is the safest, with " << safest << " accidents" << endl;

}

// function finds the most dangerous region based off the user's input of accidents
void findLeastSafe(int north, int south, int east, int west)
{
    int leastSafe = north;
    string region = "north";

    // finds the region with the greatest accidents
    if(south > leastSafe)
    {
        leastSafe = south;
        region = "south";
    }

    if(east > leastSafe)
    {
        leastSafe = east;
        region = "east";
    }

    if(west > leastSafe)
    {
        leastSafe = west;
        region = "west";
    }

    cout << "Region " << region << " is the least safe, with " << leastSafe << " accidents" << endl;

}

// function displays all the number of accidents in each region
void displayAll(int north, int south, int east, int west)
{
    cout << "North region has " << north << " accidents" << endl;
    cout << "South region has " << south << " accidents" << endl;
    cout << "East region has " << east << " accidents" << endl;
    cout << "West region has " << west << " accidents" << endl;
}

int main()
{
    // declare variables only for int
    int north, south, east, west, choice;

    // function calls to get the total accidents in each region
    north = getAccidentTotal("north");
    south = getAccidentTotal("south");
    east = getAccidentTotal("east");
    west = getAccidentTotal("west");

    // function call to get the inputted choice
    choice = getChoice();

    // checks the option the user selected from the menu
    if(choice == 1)
    {
        cout << "You entered " << choice << endl;
        findSafest(north, south, east, west);
        cout << "Exiting" << endl;
    }

    else if(choice == 2)
    {
        cout << "You entered " << choice << endl;
        findLeastSafe(north, south, east, west);
        cout << "Exiting" << endl;
    }

    else if(choice == 3)
    {
        cout << "You entered " << choice << endl;
        displayAll(north, south, east, west);
        cout << "Exiting" << endl;
    }

    else if((choice > 3) || (choice <= 0))
    {
        cout << "You entered " << choice << endl;
        cout << "Invalid choice" << endl;
        cout << "Exiting" << endl;
    }

    else
    return 0;
}
