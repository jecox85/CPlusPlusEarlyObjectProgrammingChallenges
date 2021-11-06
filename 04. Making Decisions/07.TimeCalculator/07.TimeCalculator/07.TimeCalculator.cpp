#include <iostream>
using namespace std;

int main()
{
	/*
	*	Write a program that asks the user to enter a number of seconds.
			• There are 86400 seconds in a day. If the number of seconds entered by the user is
			greater than or equal to 86400, the program should display the number of days in
			that many seconds.
			• There are 3600 seconds in an hour. If the number of seconds entered by the user is
			less than 86400, but is greater than or equal to 3600, the program should display the
			number of hours in that many seconds.
			• There are 60 seconds in a minute. If the number of seconds entered by the user is less
			than 3600, but is greater than or equal to 60, the program should display the number
			of minutes in that many seconds.
	*/
	int userSeconds;
	cout << "Please enter a number of seconds\n";	
	cin >> userSeconds;
	if (userSeconds >= 86400)
		cout << "There are " << userSeconds / 86400 << " days in the given seconds.\n";
	else if (userSeconds >= 3600)
		cout << "There are " << userSeconds / 3600 << " hours in the given seconds.\n";
	else if (userSeconds >= 60)
		cout << "There are " << userSeconds / 60 << " minutes in the given seconds.\n";
	else
		cout << "That is a small number of seconds.\n";

	return 0;
}
