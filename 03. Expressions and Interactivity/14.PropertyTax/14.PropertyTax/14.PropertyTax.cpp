#include <iostream>
using namespace std;

int main()
{
	/*
		Madison County collects property taxes on the assessed value of property, which is 60
		percent of its actual value. For example, if a house is valued at $158,000 its assessed value
		is $94,800. This is the amount the homeowner pays tax on. At last year's tax rate of $2.64
		for each $100 of assessed value, the annual property tax for this house would be $2502.72.
		Write a program that asks the user to input the actual value of a piece of property and
		the current tax rate for each $100 of assessed value. The program should then
		calculate and report how much annual property tax the homeowner will be charged for
		this property.
	*/
	cout << "What is the value of the piece of property?" << endl;
	double actualValue, assessedValue, taxRate;
	cin >> actualValue;
	assessedValue = .6 * actualValue;
	cout << "What is the current tax rate for each $100 of assessed value?" << endl;
	cin >> taxRate;
	cout << "The annual property tax you will pay is $" << (taxRate / 100) * assessedValue << "." << endl;
	return 0;
}