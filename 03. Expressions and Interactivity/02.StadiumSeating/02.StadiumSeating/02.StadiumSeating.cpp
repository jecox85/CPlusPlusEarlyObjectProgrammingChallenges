#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//	There are three seating categories at a stadium.  For a softball game, Class A seats cost $15,
	//	Class B seats cost $12, and Class C seats cost $9.  Write a program that asks how many
	//	tickets for each class of seats were sold, then displays the amount of income generated
	//	from ticket sales.  Format your dollar amount in a fixed - point notation with two decimal
	//	points and make sure the decimal point is always displayed.
	double classACost = 15, classBCost = 12, classCCost = 9;
	int classANum, classBNum, classCNum;
	cout << "This is a program for calculating the amount of income generated from ticket sales." << endl;
	cout << "How many class A seats did you sell?" << endl;
	cin >> classANum;
	cout << "How many class B seats did you sell?" << endl;
	cin >> classBNum;
	cout << "How many class C seats did you sell?" << endl;
	cin >> classCNum;
	cout << "Your total amount earned is: " << fixed << setprecision(2) << (static_cast<double>(classANum) * classACost)
		+ (static_cast<double>(classBNum) * classBCost) + (static_cast<double>(classCNum) * classCCost) << ".\n";

	return 0;
}