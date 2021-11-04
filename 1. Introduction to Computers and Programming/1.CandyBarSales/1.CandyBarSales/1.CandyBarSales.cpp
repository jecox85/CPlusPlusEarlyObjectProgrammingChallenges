#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//Using Program 1 - 1 as an example, write a program that calculates how much a student
	//organization earns during its fund raising candy sale.The program should prompt the user
	//to enter the number of candy bars soldand the amount the organization earns for each bar
	//sold.It should then calculateand display the total amount earned.

	//Program 1-1 can be found on pg 14 of the text

	//welcome to the program
	cout << "Welcome.  This program is used to calculate the total amount earned during a candy sale." << endl;
	//declare variables
	int candyBars;
	double price;
	//ask for number of candy bars sold
	cout << "How many candy bars did you sell during the fund raiser?\n" << "Number of bars: ";
	cin >> candyBars;
	//ask for the price per bar
	cout << "What is the price for each candy bar?\n" << "Price: ";
	cin >> price;
	//output total amount earned.
	cout << "The total amount earned during the candy sale is $" << fixed << setprecision(2) << (double)candyBars * price << endl;
	return 0;
}
