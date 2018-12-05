/*
Author: Michael Kasman
Compiler: GNU GCC
Date: 10/7/2018
Purpose of program: The program will read in the numbers of seconds and convert it to days, hours, minutes, and seconds.
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	long long int totalSeconds;
	long long int hours;
	long long int days;
	long long int minutes;
	long long int leftSeconds;
	const long long int SECONDS_DAY = 86400;
	const long long int SECONDS_HOUR = 3600;
	const long long int SECONDS_MINUTE = 60;

	cin >> totalSeconds;
	cout << "Total seconds: " << totalSeconds << endl << endl;
	// if a negative number or zero is entered

	if (totalSeconds <= 0) {
		cout << "Total seconds must be greater than zero" << endl;
	}

	if (totalSeconds >= SECONDS_DAY) {
		days = totalSeconds / SECONDS_DAY;
		totalSeconds = totalSeconds - (days * SECONDS_DAY);
	}
	// end of if
	else {
		days = 0; // if there isn't enough seconds to fill a day
	}
	if (totalSeconds >= SECONDS_HOUR) {
		hours = totalSeconds / SECONDS_HOUR;
		totalSeconds = totalSeconds - (hours * SECONDS_HOUR);
	}
	// end of if
	else {
		hours = 0; // if there isn't enough seconds to fill an hour
	}
	if (totalSeconds >= SECONDS_MINUTE) {
		minutes = totalSeconds / SECONDS_MINUTE;
		totalSeconds = totalSeconds - (minutes * SECONDS_MINUTE);
	}
	// end of if
	else {
		minutes = 0; // if there isnt enough seconds to fill a minute
	}
	if (totalSeconds > 0) {
		leftSeconds = totalSeconds;
	}
	// end of if
	else {
		leftSeconds = 0;
	}

	if (days > 0)
		cout << days << " day(s)" << endl;
	if (hours > 0)
		cout << hours << " hour(s)" << endl;
	if (minutes > 0)
		cout << minutes << " minute(s)" << endl;
	if (leftSeconds > 0)
		cout << leftSeconds << " second(s)" << endl;

	return 0;
}
