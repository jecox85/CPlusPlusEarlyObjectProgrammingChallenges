#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double wholesale, double percent);
int main()
{
	/*
		Write a program that asks the user to enter an item's wholesale cost and its markup
		percentage.  It should then display the item's retail price. For example:
			• If an item's wholesale cost is 5.00 and its markup percentage is 100%, then the item's
			retail price is 10.00.
			• If an item's wholesale cost is 5.00 and its markup percentage is 50%, then the item's
			retail price is 7.50.

		The program should have a function named calculateRetail that receives the
		wholesale cost and the markup percentage as arguments and returns the retail price of
		the item.
	*/ 
	double cost, markup;
	do {
		cout << "Please enter an item's wholesale cost." << endl;
		cin >> cost;
		if (cost <= 0) {
			cout << "That isn't a valid cost." << endl;
		}
	} while (cost <= 0);

	do {
		cout << "Please enter an item's markup percentage." << endl;
		cin >> markup;
		if (markup <= 0) {
			cout << "That isn't a valid markup." << endl;
		}
	} while (markup <= 0);

	cout << "The retail price of the item should be: $" << fixed << setprecision(2)
		<< calculateRetail(cost, markup) << "." << endl;
	return 0;
}
double calculateRetail(double wholesale, double percent) {
	return (wholesale + ((percent / 100) * wholesale));
}

