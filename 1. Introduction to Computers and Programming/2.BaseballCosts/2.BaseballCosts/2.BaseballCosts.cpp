#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//	Using Program 1 - 1 as an example, write a program that calculates how much a little league
	//	baseball team spent last year to purchase new baseballs.The program should prompt the
	//	user to enter the number of baseballs purchased and the cost of each baseball.  It should
	//	then calculate and display the total amount spent to purchase the baseballs.

	//Program 1-1 can be found on pg 14 of the text

	//welcome to the program
	cout << "Welcome.  This program is used to calculate the total amount spent on baseballs during a little league season." << endl;
	//declare variables
	int baseballs;
	double price;
	//ask for number of candy bars sold
	cout << "How many baseballs did your team use last year?\n" << "Number of baseballs: ";
	cin >> baseballs;
	//ask for the price per bar
	cout << "What was the price for each baseball?\n" << "Price: ";
	cin >> price;
	//output total amount earned.
	cout << "The total amount spent on baseballs last year was $" << fixed << setprecision(2) << (double)baseballs * price << "." << endl;
	return 0;
}
