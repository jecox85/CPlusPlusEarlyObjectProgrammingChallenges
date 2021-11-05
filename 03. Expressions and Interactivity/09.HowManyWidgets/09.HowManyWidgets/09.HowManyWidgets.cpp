#include <iostream>
using namespace std;

int main()
{
	/*
		The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each. Write a
		program that calculates how many widgets are stacked on a pallet, based on the total
		weight of the pallet. The program should ask the user how much the pallet weighs by itself
		and with the widgets stacked on it. It should then calculate and display the number of
		widgets stacked on the pallet.
	*/
	const double WIDGET_WEIGHT = 9.2;
	cout << "How much does the pallet weigh by itself?\n";
	double pallet;
	cin >> pallet;
	cout << "How much does the pallet weigh with the widgets stacked on it?\n";
	double totalWeight;
	cin >> totalWeight;
	int widgetNum = (totalWeight - pallet) / WIDGET_WEIGHT;
	cout << "There are " << widgetNum << " widgets on the pallet." << endl;

	return 0;
}