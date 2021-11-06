#include <iostream>
#include <iomanip>
using namespace std;

double celciusToFahrenheit(double c);
int main()
{
	/*	
		In one of the Chapter 3 Programming Challenges you were asked to write a program
		that converts a Celsius temperature to Fahrenheit. Modify that program so it uses a
		loop to display a table of the Celsius temperatures from 0 to 20 and their Fahrenheit
		equivalents.
			F = (9 / 5) * C + 32
	*/
	cout << "Celcius" << setw(13) << "Fahrenheit" << endl;
	for (int i = 0; i < 20; i++)
		cout << "-";
	cout << endl;
	cout << fixed;
	for (int i = 0; i <= 20; i++) {
		cout << setw(4) << i << setw(13)<< setprecision(1) << celciusToFahrenheit(static_cast<double>(i)) << endl;
	}
	return 0;
}
double celciusToFahrenheit(double c) {
	return (((9.0 / 5.0) * c) + 32);
}
