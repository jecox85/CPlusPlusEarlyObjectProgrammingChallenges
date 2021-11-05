#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//	An electronics company sells circuit boards at a 40 percent profit.  Write a program that
	//	calculates the selling price of a circuit board that costs them $12.67 to produce.  Display the
	//	result on the screen.
	double boardCost = 12.67;
	double profit = .4;
	cout << fixed;
	cout << "If a circuit board costs $" << setprecision(2) << boardCost << " to make and the company wants a " << profit * 100 << "%." << endl;
	cout << "The price of the board should be set at $" << setprecision(2) << (1 + profit) * boardCost << "." << endl;

	return 0;
}
