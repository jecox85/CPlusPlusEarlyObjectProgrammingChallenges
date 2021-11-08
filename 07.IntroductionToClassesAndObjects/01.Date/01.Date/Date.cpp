#include "Date.h"
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
//default day should be 1/1/2001
Date::Date() {
	month = 1;
	day = 1;
	year = 2001;
}
//if any of the inputs are bad, default to 1/1/2001
Date::Date(int m, int d, int y) {
	if (validateMonth(m) && validateDay(m, d) && validateYear(y)) {
		month = m;
		day = d;
		year = y;
	}
	else {
		month = 1;
		day = 1;
		year = 2001;
	}
}
std::string Date::getMonthString(int m) {
	std::string returnString;
	switch (m) {
		case 1:
			returnString = "January";
			break;
		case 2:
			returnString = "February";
			break;
		case 3:
			returnString = "March";
			break;
		case 4:
			returnString = "April";
			break;
		case 5:
			returnString = "May";
			break;
		case 6:
			returnString = "June";
			break;
		case 7:
			returnString = "July";
			break;
		case 8:
			returnString = "August";
			break;
		case 9:
			returnString = "September";
			break;
		case 10:
			returnString = "October";
			break;
		case 11:
			returnString = "November";
			break;
		case 12:
			returnString = "December";
			break;
		default:
			returnString = "Something Went Wrong";
			break;
	}
	return returnString;
}
std::string Date::shortDate() {
	return std::to_string(month) + " / " + std::to_string(day) + " / " + std::to_string(year % 100);
}
//15 March 2013
std::string Date::longDateDayFirst() {
	return std::to_string(day) + " " + getMonthString(month) + " " + std::to_string(year);
}
//March 15, 2013
std::string Date::longDate() {
	return getMonthString(month) + " " + std::to_string(day) + " " + ", " + std::to_string(year);
}

bool Date::validateMonth(int m) {
	if (m > 0 && m <= 12)
		return true;
	else
		return false;
}
bool Date::validateDay(int m, int d) {
	bool returnBool = false;
	if (!validateMonth(m))
		returnBool = false;
	else if (d < 1 || d > 31)
		returnBool = false;
	//logic for 31 day months
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d >= 1 && d <= 31)
			returnBool = true;
		else
			returnBool = false;
	}
	//logic for feb
	else if (m == 2) {
		if (d <= 1 && d <= 29)
			returnBool = true;
		else
			returnBool = false;
	}
	//logic for 30 day months
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d <= 1 && d <= 30)
			returnBool = true;
		else
			returnBool = false;
	}
	return returnBool;
}
bool Date::validateYear(int y) {
	if (y < 0)
		return false;
	else
		return true;
}

void Date::setDay(int d) {
	day = d;
}
void Date::setMonth(int m) {
	month = m;
}
void Date::setYear(int y) {
	year = y;
}