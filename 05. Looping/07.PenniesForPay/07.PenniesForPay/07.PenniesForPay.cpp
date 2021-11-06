#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	/*
		Write a program that calculates how much a person earns in a month if the salary is one
		penny the first day, two pennies the second day, four pennies the third day, and so on
		with the daily pay doubling each day the employee works. The program should ask the
		user for the number of days the employee worked during the month , validate that it is
		between 1 and 31, and then display a table showing how much the salary was for each
		day worked, as well as the total pay earned for the month. The output should be
		displayed in dollars with two decimal points, not in pennies.
	*/
	int days;
	do {
		cout << "Enter a number of days to work from 1 to 31" << endl;
		cin >> days;
	} while (days < 1 || days > 31);
	cout << " Day" << setw(25) << "Days' Salary (dollars)" << endl;
	for (int i = 0; i < 20; i++)
		cout << "-";
	cout << endl << fixed;
	for (int i = 1; i <= days; i++) {
		cout << setw(4) << i << setw(13) << setprecision(2) << pow(2, (i - 1)) / 100.0 << endl;
	}
	return 0;
}