#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		Write a program that asks the user to enter their monthly costs for each of the following
		housing related expenses :
			• rent or mortgage payment
			• utilities
			• phones
			• cable
		The program should then display the total monthly cost of these expenses, and the total
		annual cost of these expenses.
		*/
	cout << "This program is made to calculate your total monthly cost of housing." << endl;
	double rent, utilities, phone, cable;
	cout << "What is your monthly rent or mortgage payment?" << endl;
	cin >> rent;
	cout << "What do your monthly utilities cost?" << endl;
	cin >> utilities;
	cout << "What is your monthly phone payment?" << endl;
	cin >> phone;
	cout << "What is your monthly cable payment?" << endl;
	cin >> cable;
	double monthlyCost = rent + utilities + phone + cable;
	double annualCost = monthlyCost * 12;
	cout << fixed << setprecision(2) << "Your total monthly cost is $" << monthlyCost << "." << endl;
	cout << fixed << setprecision(2) << "Your total annual cost is $" << annualCost << "." << endl;
	return 0;
}