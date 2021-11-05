#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	/*
		Assuming there are no deposits other than the original investment, the balance in a savings
		account after one year may be calculated as
			Amount = Principal * ((1 + (Rate / T)) ^ T)
		where Principal is the balance in the account, Rate is the annual interest rate, and T is the
		number of times the interest is compounded during a year (e.g., T is 4 if the interest is
		compounded quarterly).
		Write a program that asks for the principal, the interest rate, and the number of times
		the interest is compounded. It should display a report similar to the following:

			Interest Rate:		     4.25%
			Times Compounded:	       12
			Principal:			$ 1000.00
			Interest:			$   43.33
			Final balance:		$ 1043.33
		*/
	cout << "What is the principal?" << endl;
	double principal, interestRate, interest, balance;
	int T;
	cin >> principal;
	cout << "What is the interest rate in percentage?" << endl;
	cin >> interestRate;
	cout << "How many times is the interest compounded during a year?" << endl;
	cin >> T;
	balance = principal * pow((1 + ((interestRate / 100) / static_cast<double>(T))), T);
	interest = balance - principal;
	cout << left << setw(20) << "Interest Rate:" << right << setw(9) << interestRate << "%" << endl;
	cout << left << setw(20) << "Times Compounded:" << right << setw(9) << T << endl;
	cout << fixed;
	cout << left << setw(20) << "Principal:" << "$" << right << setw(8) << setprecision(2) << principal << endl;
	cout << left << setw(20) << "Interest:" << "$" << right << setw(8) << setprecision(2) << interest << endl;
	cout << left << setw(20) << "Final Balance " << "$" << right << setw(8) << setprecision(2) << balance << endl;

	return 0;
}
