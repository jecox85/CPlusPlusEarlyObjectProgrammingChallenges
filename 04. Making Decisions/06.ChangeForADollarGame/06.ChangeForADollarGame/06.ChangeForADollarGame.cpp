#include <iostream>
using namespace std;

int main()
{
	/*
	*	Create a change-counting game that asks the user to enter what coins to use to make
	*	exactly one dollar. The program should ask the user to enter the number of pennies,
	*	nickels, dimes, and quarters. If the total value of the coins entered is equal to one dollar,
	*	the program should congratulate the user for winning the game. Otherwise, the program
	*	should display a message indicating whether the amount entered was more or less than one
	*	dollar. Use constant variables to hold the coin values.
	*/
	const int PENNY = 1;
	const int NICKEL = 5;
	const int DIME = 10;
	const int QUARTER = 25;
	int userPenny, userNickel, userDime, userQuarter, total;
	cout << "Please choose enough pennies, nickels, dimes, and quarters to make a dollar.\n";
	do {
		cout << "How many pennies?\n";
		cin >> userPenny;
		if (userPenny < 0)
			cout << "That is not a valid choice.\n";
	} while (userPenny < 0);
	do {
		cout << "How many nickels?\n";
		cin >> userNickel;
		if (userNickel < 0)
			cout << "That is not a valid choice.\n";
	} while (userNickel < 0);
	do {
		cout << "How many dimes?\n";
		cin >> userDime;
		if (userDime < 0)
			cout << "That is not a valid choice.\n";
	} while (userDime < 0);
	do {
		cout << "How many quarters?\n";
		cin >> userQuarter;
		if (userQuarter < 0)
			cout << "That is not a valid choice.\n";
	} while (userQuarter < 0);
	total = (userPenny * PENNY) + (userNickel * NICKEL) + (userDime * DIME) + (userQuarter * QUARTER);
	if (total == 100)
		cout << "Congratulations, your total equals a dollar.  You win!\n";
	else
		cout << "Sorry, your total equals $" << static_cast<double>(total) / 100.0 << ".  Please try again.\n";
	return 0;
}
