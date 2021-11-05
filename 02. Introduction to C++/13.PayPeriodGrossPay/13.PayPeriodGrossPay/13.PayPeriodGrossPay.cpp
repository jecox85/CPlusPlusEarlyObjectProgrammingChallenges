#include <iostream>
using namespace std;

int main()
{
	//	A particular employee earns $32,500 annually.  Write a program that determines and displays
	//	what the amount of his gross pay will be for each pay period if he is paid twice a month (24
	//	pay checks per year) and if he is paid bi - weekly (26 checks per year).
	double pay = 32500;
	cout << "If a person's salary is $" << pay << " a year, their gross pay would be the following on each paycheck." << endl;
	cout << "Twice a month: $" << pay / 24 << endl;
	cout << "Bi-weekly: $" << pay / 26 << endl;

	return 0;
}
