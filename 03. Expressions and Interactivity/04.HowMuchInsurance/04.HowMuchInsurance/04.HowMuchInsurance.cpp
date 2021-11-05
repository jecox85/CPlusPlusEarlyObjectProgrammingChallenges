#include <iostream>
using namespace std;

int main()
{
	/*	
		Many financial experts advise property owners to insure their homes or buildings for at
		least 80 percent of the amount it would cost to replace the structure.  Write a program that
		asks the user to enter the replacement cost of a building and then displays the minimum
		amount of insurance that should be purchased for the property.
	*/
	double replacementCost;
	cout << "This program will tell you how much insurance coverage to get based on your building's replacement cost." << endl;
	cout << "What is the replacement cost of your building?\n";
	cin >> replacementCost;
	cout << "The minimum amount of insurance that should be purchased for this building is $" << replacementCost * .8 << '.' << endl;
	return 0;
}
