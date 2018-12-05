
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const double EARTHACCELERATION = 9.81;
	const double MOONACCELERATION = 1.62;
	const double VENUSACCELERATION = 8.87;
	double mass;
	double earthWeight;
	double moonWeight;
	double venusWeight;

	cout << fixed << setprecision(4) << showpoint;
	cin >> mass;
	if (mass <= 0) {
		cout << "The mass is " << mass << " kg" << endl;
		cout << "The mass must be greater than zero" << endl;
	}
	else {

		earthWeight = mass * EARTHACCELERATION;
		moonWeight = mass * MOONACCELERATION;
		venusWeight = mass * VENUSACCELERATION;


		cout << "The mass is " << mass << " kg" << endl;
		cout << left << setw(8) << "Location" << right << setw(14) << "Weight (N)" << endl;
		cout << left << setw(8) << "Earth   " << right << setw(14) << earthWeight << endl;
		cout << left << setw(8) << "Moon    " << right << setw(14) << moonWeight << endl;
		cout << left << setw(8) << "Venus   " << right << setw(14) << venusWeight << endl;


		if (earthWeight <= 5 && mass > 0) {
			cout << "The object is light" << endl;
		}
		else if (earthWeight >= 1500) {
			cout << "The object is heavy" << endl;
		}
	}
		return 0;
	}
