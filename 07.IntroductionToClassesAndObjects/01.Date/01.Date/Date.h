#pragma once
#include <string>
class Date
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
		reasonable values for month and day. The month should be between 1 and 12. The day
		should be between 1 and the number of days in the selected month.
	*/
	private:
		int month;
		int day;
		int year;
		bool validateMonth(int m);
		bool validateDay(int m, int d);
		bool validateYear(int y);
		std::string getMonthString(int m);
	public:
		Date();
		Date(int m, int d, int y);
		std::string shortDate();
		std::string longDate();
		std::string longDateDayFirst();
		void setDay(int d);
		void setMonth(int m);
		void setYear(int y);

};

