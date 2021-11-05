#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Madison County provides a $5000 homeowner exemption for senior citizens. For example, if
		their house is valued at $158,000 its assessed value would be $94,800, as explained above.
		However they would only pay tax on $89,800. At last year's tax rate of $2.64 for each $100
		of assessed value, their property tax would be $2370.72. In addition to the tax break, senior
		citizens are allowed to pay their property tax in 4 equal payments. The quarterly payment due
		on this property would be $592.68. Write a program that asks the user to input the actual
		value of a piece of property and the current tax rate for each $100 of assessed value. The
		program should then calculate and report how much annual property tax a senior
		homeowner will be charged for this property and what their quarterly tax bill will be.
	*/
	cout << "What is the value of the piece of property?" << endl;
	double actualValue, assessedValue, taxRate;
	cin >> actualValue;
	assessedValue = .6 * actualValue;
	cout << "What is the current tax rate for each $100 of assessed value?" << endl;
	cin >> taxRate;
	double annualTax = (taxRate / 100) * (assessedValue - 5000);
	cout << fixed;
	cout << "The annual property tax you will pay is $" << setprecision(2) << annualTax << "." << endl;
	cout << "Your quarterly payment will be $" << setprecision(2) << annualTax / 4 << "." << endl;
	return 0;
}
