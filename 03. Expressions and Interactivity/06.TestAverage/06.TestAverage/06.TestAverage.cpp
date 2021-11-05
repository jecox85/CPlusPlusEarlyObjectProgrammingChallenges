#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Write a program that asks for five test scores. The program should calculate the average test
		score and display it. The number displayed should be formatted in fixed-point notation, with
		one decimal point of precision.
	*/
	double a, b, c, d, e;
	cout << "Please enter 5 test scores with each score separated by a space.\n";
	cin >> a >> b >> c >> d >> e;
	double average = (a + b + c + d + e) / 5;
	cout << "Your average test score is " << fixed << setprecision(1) << average;
	return 0;
}
