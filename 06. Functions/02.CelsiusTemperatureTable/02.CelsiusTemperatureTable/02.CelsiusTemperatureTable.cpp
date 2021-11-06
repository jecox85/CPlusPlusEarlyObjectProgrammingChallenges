#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double f);
int main()
{
	/*
		The formula for converting a temperature from Fahrenheit to Celsius is
			C = (5 / 9) * (F - 32)
		where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
		named celsius that accepts a Fahrenheit temperature as an argument. The function
		should return the temperature, converted to Celsius. Demonstrate the function by calling
		it in a loop that displays a table of the Fahrenheit temperatures 0 through 20 and their
		Celsius equivalents.
			F = (9 / 5) * C + 32
	*/
	cout << "Fahrenheit" << setw(13) << "Celsius" << endl;
	for (int i = 0; i < 20; i++)
		cout << "-";
	cout << endl;
	cout << fixed;
	for (int i = 0; i <= 20; i++) {
		cout << setw(4) << i << setw(13) << setprecision(1) << celsius(static_cast<double>(i)) << endl;
	}
	return 0;
}
double celsius(double f) {
	return ((5.0 / 9.0) * (f - 32));
}
