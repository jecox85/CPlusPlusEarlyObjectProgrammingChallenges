#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Write a program that calculates the average monthly rainfall for three months. The
		program should ask the user to enter the name of each month, such as June or July, and the
		amount of rain (in inches) that fell that month. The program should display a message
		similar to the following:
		The average monthly rainfall for June, July, and August was 6.72 inches.
	*/
	cout << "This program will calculate the average rainfall for three given months.\n";
	cout << "Enter a month and it's rainfall in inches separated by a space.\n";
	string month1, month2, month3;
	double rain1, rain2, rain3, average;
	cin >> month1 >> rain1;
	cout << "Enter another month and it's rainfall in inches separated by a space.\n";
	cin >> month2 >> rain2;
	cout << "Enter another month and it's rainfall in inches separated by a space.\n";
	cin >> month3 >> rain3;
	average = (rain1 + rain2 + rain3) / 3;
	cout << fixed << setprecision(2) << "The average monthly rainfall for " + month1 + ", " + month2 + ", and "
		+ month3 + " was " << average << " inches.\n";
	return 0;
}
