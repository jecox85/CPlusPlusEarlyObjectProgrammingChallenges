#include <iostream>
#include <iomanip>
using namespace std;

double kphToMph(double kph);
int main()
{
	/*
		Write a program that displays a table of speeds in kilometers per hour with their
		values converted to miles per hour.  The table should display the speeds from 40
		kilometers per hour through 120 kilometers per hour, in increments of 5 kilometers
		per hour. (In other words, it should display 40 kph, 45 kph, 50 kph and so forth, up
		through 120 kph.)
			MPH = KPH * 0.6214
	*/
	cout << " kph" << setw(12) << "mph" << endl;
	for (int i = 0; i < 20; i++)
		cout << "-";
	cout << endl;
	cout << fixed;
	for (int i = 40; i <= 120; i += 5) {
		cout << setw(4) << i << setw(13) << setprecision(1) << kphToMph(static_cast<double>(i)) << endl;
	}
	return 0;
}
double kphToMph(double kph) {
	return (kph * 0.6214);
}
