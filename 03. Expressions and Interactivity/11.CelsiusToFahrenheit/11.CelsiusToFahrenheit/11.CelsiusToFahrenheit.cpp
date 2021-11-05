#include <iostream>
using namespace std;

double celciusToFahrenheit(double c);
int main()
{
	/*
		Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
		formula is
		F = (9/5)c + 32
		where F is the Fahrenheit temperature and C is the Celsius temperature. The program
		should prompt the user to input a Celsius temperature and should display the corresponding
		Farenheit temperature.
	*/
	cout << "Give me a temperature in Celsius.\n";
	double celciusTemp;
	cin >> celciusTemp;
	cout << "That is " << celciusToFahrenheit(celciusTemp) << " in Fahrenheit.";
	return 0;
}
double celciusToFahrenheit(double c) {
	return (((9.0 / 5.0) * c) + 32);
}