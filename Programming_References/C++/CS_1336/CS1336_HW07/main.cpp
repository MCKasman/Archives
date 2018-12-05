/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 11/1/2018
Purpose of program: The program prompts the user to enter 5 scores from judges of a talent competition. The performer's final score in the program
is calculated by dropping the highest and lowest scores received, then averages the three remaining scores.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// function prototypes
void getJudgeData(double &, double &, double &, double &, double &);
void calcScore(double &, double &, double &, double &, double &, double &);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
    // declare variables
    double score1, score2, score3, score4, score5, calculatedScore;

    // function call to receive the user's inputs of the judges' scores
    getJudgeData(score1, score2, score3, score4, score5);

    // function call to calculated the score after the highest and lowest scores are removed and the final score is averaged
    calcScore(score1, score2, score3, score4, score5, calculatedScore);

    cout << "After dropping the lowest and highest scores, the average score was " << fixed << setprecision(1) << calculatedScore << "." << endl;
    cout << "Normal termination, exiting" << endl;

}

// function which receives the user's input of the judges' scores
// function verifies whether the score is in between 0.0 to 10.0; if not,
// the function will output a statement and EXIT_FAILURE

// logic: if score is less than 0.0 or greater than 10.0, then the function will terminate in EXIT_FAILURE
void getJudgeData(double & score1, double & score2, double & score3, double & score4, double & score5)
{
    // score 1
    cout << "Enter a judge's score: ";
    cin >> score1;
    if((score1 < 0.0) || (score1 > 10.0 ))
    {
        cout << "The score must be between 0.0 and 10.0, exiting";
        exit(EXIT_FAILURE);
    }

    // score 2
    cout << "Enter a judge's score: ";
    cin >> score2;
    if((score1 < 0.0) || (score1 > 10.0 ))
    {
        cout << "The score must be between 0.0 and 10.0, exiting";
        exit(EXIT_FAILURE);
    }

    // score 3
    cout << "Enter a judge's score: ";
    cin >> score3;
    if((score1 < 0.0) || (score1 > 10.0 ))
    {
        cout << "The score must be between 0.0 and 10.0, exiting";
        exit(EXIT_FAILURE);
    }

    // score 4
    cout << "Enter a judge's score: ";
    cin >> score4;
    if((score1 < 0.0) || (score1 > 10.0 ))
    {
        cout << "The score must be between 0.0 and 10.0, exiting";
        exit(EXIT_FAILURE);
    }

    // score 5
    cout << "Enter a judge's score: ";
    cin >> score5;
    if((score1 < 0.0) || (score1 > 10.0 ))
    {
        cout << "The score must be between 0.0 and 10.0, exiting";
        exit(EXIT_FAILURE);
    }
}

// function calculates the final score of the inputted scores by the user
void calcScore(double & score1, double & score2, double & score3, double & score4, double & score5, double & calculatedScore)
{
    // variable declaration
    double lowest, highest, total;

    // calculates the lowest score through calling the findLowest() function
    lowest = findLowest(score1, score2, score3, score4, score5);

    // calculates the highest score through calling the findHighest() function
    highest = findHighest(score1, score2, score3, score4, score5);

    // highest and lowest score is removed from the total score
    total = score1 + score2 + score3 +score4 + score5 - (highest + lowest);

    // the calculated or final score is divided by 3
    calculatedScore = total/3;
}

// function that finds the lowest score
double findLowest(double score1, double score2, double score3, double score4, double score5)
{
    double lowest = score1;

    if(score2 < lowest)
    lowest = score2;

    if(score3 < lowest)
    lowest = score3;

    if(score4 < lowest)
    lowest = score4;

    if(score5 < lowest)
    lowest = score5;

    return lowest;

}

// function that finds the highest score
double findHighest(double score1, double score2, double score3, double score4, double score5)
{
    double highest = score1;

    if(score2 > highest)
    highest = score2;

    if(score3 > highest)
    highest = score3;

    if(score4 > highest)
    highest = score4;

    if(score5 > highest)
    highest = score5;

    return highest;
}
