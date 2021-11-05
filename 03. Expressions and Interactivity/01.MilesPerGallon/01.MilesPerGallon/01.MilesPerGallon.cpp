#include <iostream>
using namespace std;

int main()
{
	/*	
		Write a program that calculates a car's gas mileage. The program should ask the user to
		enter the number of gallons of gas the car can hold and the number of miles it can be
		driven on a full tank.It should then calculate and display the number of miles per gallon
		the car gets.
	*/
	double gasTank;
	double miles;
	cout << "This is a program to calculate your car's gas mileage.\n";
	cout << "How many gallons of gas does your car hold?\n";
	cin >> gasTank;
	cout << "How many miles can your car drive on a tank of gas?\n";
	cin >> miles;
	cout << "Your car gets " << miles / gasTank << " miles to the gallon." << endl;
	return 0;
}
