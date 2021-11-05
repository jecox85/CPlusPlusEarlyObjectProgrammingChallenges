#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Write a program to find a baseball player's batting average. The program should ask the
		user to enter the number of times the player was at bat and the number of hits he got. It
		should then display his batting average to 4 decimal places.
	*/
	cout << "This is a program intended to calculate a user's batting average.\n";
	int atBats;
	int hits;
	double battingAverage;
	cout << "Please enter the number of at bats the player has.\n";
	cin >> atBats;
	cout << "Please enter the number of hits the player has.\n";
	cin >> hits;
	battingAverage = static_cast<double>(hits) / static_cast<double>(atBats);
	cout << "The users batting average is " << fixed << setprecision(4) << battingAverage << ".\n";
	return 0;
}
