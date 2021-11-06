#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Assuming the level of the Earth's oceans continues rising at about 3.1 millimeters per year,
		write a program that displays a table showing the total number of millimeters the oceans
		will have risen each year for the next 25 years.
	*/
	cout << " Year" << setw(14) << "mm risen" << endl;
	for (int i = 0; i < 20; i++)
		cout << "-";
	cout << endl;
	cout << fixed;
	for (int i = 1; i <= 25; i++) {
		cout << setw(4) << i << setw(13) << setprecision(1) << static_cast<double>(i) * 3.1 << endl;
	}
	return 0;
}