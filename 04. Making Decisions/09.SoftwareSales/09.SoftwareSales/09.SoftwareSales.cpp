#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	*	A software company sells a package that retails for $99. Quantity discounts are given
		according to the following table.
			Quantity			Discount
			 10-19				  20%
			 20-49				  30%
			 50-99				  40%
			 100 or more		  50%
		
		Write a program that asks for the number of units purchased and computes the total cost
		of the purchase.
			Input Validation: Decide how the program should handle an input of less than 0.
	*/
	const double UNIT_COST = 99.00;
	int units, discount;
	double discountedCost;
	do {
		cout << "How many units would you like to purchase?\n";
		cin >> units;
		if (units < 0)
			cout << "That is not a valid selection.\n";
	} while (units < 0);
	if (units < 10)
		discount = 0;
	else if (units < 20)
		discount = 20;
	else if (units < 50)
		discount = 30;
	else if (units < 100)
		discount = 40;
	else
		discount = 50;
	discountedCost = (UNIT_COST * (1.0 - (static_cast<double>(discount) / 100.0)));
	cout << "Your discount = " << discount << "%." << endl;
	cout << fixed;
	cout << "At a cost of $" << setprecision(2) << discountedCost << " each.  Your total is $" << setprecision(2) << static_cast<double>(units) * discountedCost << ".\n";
	return 0;
}
