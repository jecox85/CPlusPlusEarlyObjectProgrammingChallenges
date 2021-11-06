#include <iostream>
using namespace std;

int main()
{
	/*
	*	The date June 10, 1960, is special because when we write it in the following format, the
	*	month times the day equals the year.
	*		6/10/60
	*	Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit
	*	year. The program should then determine whether the month times the day is equal to
	*	the year. If so, it should display a message saying the date is magic. Otherwise, it should
	*	display a message saying the date is not magic.
	*		Input Validation: Think about what legal values the program should accept for month
	*		and day.
	*/

	
	int month, day, year;
	do {
		cout << "Enter a month (in numeric form.)" << endl;
		cin >> month;
	} while (!(month >= 0 && month <= 12));
	do {
		cout << "Enter a day of the month." << endl;
		cin >> day;
	} while (!(day >= 1 && day <= 31));
	do {
		cout << "Enter a year in one or two digit form." << endl;
		cin >> year;
	} while (!(year >= 1 && year <= 99));
	cout << ((month * day == year) ? "That date is magic." : "That date is not magic.");
	return 0;
}

