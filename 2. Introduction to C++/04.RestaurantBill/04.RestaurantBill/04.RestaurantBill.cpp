#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//	Write a program that computes the tax and tip on a restaurant bill for a patron with a
	// $44.50 meal charge.The tax should be 6.75 percent of the meal cost.The tip should be 15
	// percent of the total after adding the tax.  Display the meal cost, tax amount, tip amount, and
	// total bill on the screen.
	cout << "Total purchase price of a $44.50 meal with a sales tax of 6.75 percent, and tip of 15 percent: " << endl;
	double meal = 44.50;
	double tax = (meal * .0675);
	double tip = (meal + tax) * .15;
	double total = meal + tax + tip;
	cout << fixed;
	cout << setprecision(2) << "Meal:\t$" << meal << endl;
	cout << setprecision(2) << "Tax:\t$" << tax << endl;
	cout << setprecision(2) << "Tip:\t$" << tip << endl;
	cout << setprecision(2) << "Total:\t$" << total << endl;
	return 0;
}
