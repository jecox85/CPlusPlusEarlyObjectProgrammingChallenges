#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	/*
		The monthly payment on a loan may be calculated by the following formula:
		
			Payment = see textbook pg 153
		
		Rate is the monthly interest rate, which is the annual interest rate divided by 12. (A 12
		percent annual interest would be 1 percent monthly interest.) N is the number of payments
		and L is the amount of the loan. Write a program that asks for these values and displays
		a report similar to the fallowing:

			Loan Amount:			  $ 10000.00
			Monthly Interest Rate:    	  	  1%
			Number of Payments:		  	      36
			Monthly Payment:		  $	  332.14
			Amount Paid Back:		  $ 11957.15
			Interest Paid:			  $  1957.15
	*/
	double loan, monthlyInterest, monthlyPayment, totalPaid, interestPaid;
	int paymentNum;
	cout << "What is the amount of your loan?" << endl;
	cin >> loan;
	cout << "What is the annual interest rate of your loan in percent?" << endl;
	cin >> monthlyInterest;
	monthlyInterest = (monthlyInterest / 100) / 12;
	cout << "How many payments is the loan for?" << endl;
	cin >> paymentNum;
	monthlyPayment = ((monthlyInterest * pow((1 + monthlyInterest), paymentNum)) / (pow((1 + monthlyInterest), paymentNum) - 1)) * loan;
	totalPaid = monthlyPayment * static_cast<double>(paymentNum);
	interestPaid = totalPaid - loan;
	cout << fixed;
	cout << left << setw(26) << "Loan Amount:" << "$" << right << setw(9) << setprecision(2) << loan << endl;
	cout << left << setw(26) << "Monthly Interest Rate:" << right << setw(9) << monthlyInterest * 100 << "%" << endl;
	cout << left << setw(26) << "Number of Payments:" << right << setw(10) << paymentNum << endl;
	cout << left << setw(26) << "Monthly Payment:" << "$" << right << setw(9) << setprecision(2) << monthlyPayment << endl;
	cout << left << setw(26) << "Amount Paid Back:" << "$" << right << setw(9) << setprecision(2) << totalPaid << endl;
	cout << left << setw(26) << "Interest Paid:" << "$" << right << setw(9) << setprecision(2) << interestPaid << endl;
	return 0;
}
