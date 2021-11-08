#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	/*
		Design a class called Date that has integer data members to store month, day, and year.  The
		class should have a three-parameter default constructor that allows the date to be set at the
		time a new Date object is created.  If the user creates a Date object without passing any
		arguments, or if any of the values passed are invalid, the default values of 1, 1, 2001 (i.e.,
			January 1, 2001) should be used.  The class should have member functions to print the date
		in the following formats :
			3 / 15 / 13
			March 15, 2013
			15 March 2013
		Demonstrate the class by writing a program that uses it. Be sure your program only accepts
		reasonable values for monthand day. The month should be between 1 and 12. The day
		should be between 1 and the number of days in the selected month.
	*/
	cout << "Creating 2 Date objects, date1 uses the default constructor, date2 uses (5, 24, 1985) as arguments." << endl;
	Date date1;
	Date date2(5, 24, 1985);
	cout << date1.longDate() << endl;
	cout << date2.longDate() << endl;
	cout << date2.longDateDayFirst() << endl;
	cout << date2.shortDate() << endl;

	return 0;
}
