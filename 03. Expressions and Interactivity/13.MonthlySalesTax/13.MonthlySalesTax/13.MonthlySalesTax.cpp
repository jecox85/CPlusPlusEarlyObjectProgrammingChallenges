#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		A retail company must file a monthly sales tax report listing the sales for the month and
		the amount of sales tax collected.  Write a program that asks for the month, the year, and
		the total amount collected at the cash register (that is, sales plus sales tax).  Assume the
		state sales tax is 4 percent and the county sales tax is 2 percent.
		If the total amount collected is known and the total sales tax is 6 percent, the amount of
		product sales may be calculated as
			S = T / 1.06
		where S is the product sales and T is the total income (product sales plus sales tax).
		The program should display a report similar to the following:
			Month: March 2008
			--------------------
			Total Collected:    $ 26572.89
			Sales:				$ 25068.76
			County Sales Tax:	$ 501.38
			State Sales Tax:	$ 1002.75
			Total Sales Tax:	$ 1504.13
	*/
	cout << "What month?" << endl;
	string month;
	cin >> month;
	cout << "What year?" << endl;
	int year;
	cin >> year;
	cout << "What was the total amount collected that month?" << endl;
	double total, sales, countyTax, stateTax, totalTax;
	cin >> total;
	sales = total / 1.06;
	countyTax = sales * .02;
	stateTax = sales * .04;
	totalTax = countyTax + stateTax;
	cout << endl << "Month: " << month << " " << year << endl;
	cout << "--------------------\n";
	cout << fixed;
	cout << setw(20) << left << "Total Collected:" << "$" << right << setw(9) << setprecision(2) << total << endl;
	cout << setw(20) << left << "Sales:" << "$" << right << setw(9) << setprecision(2) << sales << endl;
	cout << setw(20) << left << "County Sales Tax:" << "$" << right << setw(9) << setprecision(2) << countyTax << endl;
	cout << setw(20) << left << "State Sales Tax:" << "$" << right << setw(9) << setprecision(2) << stateTax << endl;
	cout << setw(20) << left << "Total Sales Tax:" << "$" << right << setw(9) << setprecision(2) << totalTax << endl;
	return 0;
}
