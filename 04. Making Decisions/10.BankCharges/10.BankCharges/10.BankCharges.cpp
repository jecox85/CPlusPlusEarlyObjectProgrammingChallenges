#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	*	A bank charges $10 per month plus the following check fees for a commercial checking
		account:
			$ .10 each for fewer than 20 checks
			$.08 each for 20-39 checks
			$.06 each for 40-59 checks
			$.04 each for 60 or more checks

		Write a program that asks for the number of checks written during the past month, then
		computes and displays the bank's fees for the month.

		Input Validation: Decide how the program should handle an input of less than 0.
	*/
	const double UNIT_COST = 99.00;
	int checks;
	double cost;
	do {
		cout << "How many checks did you write during the last month?\n";
		cin >> checks;
		if (checks < 0)
			cout << "That is not a valid selection.\n";
	} while (checks < 0);
	if (checks < 20)
		cost = .10;
	else if (checks < 40)
		cost = .08;
	else if (checks < 60)
		cost = .06;
	else
		cost = .04;
	cout << fixed;
	cout << "Your cost per check = $" << setprecision(2) << cost << "." << endl;
	cout << "Your total is $" << setprecision(2) << static_cast<double>(checks) * cost << ".\n";
	return 0;
}
