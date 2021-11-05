#include <iostream>
using namespace std;


const double YEN_PER_DOLLAR = 113.46;
const double EUROS_PER_DOLLAR = .87;

int main()
{
	/*
		Write a program that will convert U.S.dollar amounts to Japanese yen and to euros,
		storing the conversion factors in the constant variables YEN_PER_DOLLAR and
		EUROS_PER_DOLLAR.  To get the most up - to - date exchange rates, search the Internet
		using the term "currency exchange rate" or "currency converter".  If you cannot find the
		most recent exchange rates, use the following :
			//updated 11-5-2021
			1 Dollar = 113.46 Yen
			1 Dollar = .87 Euros
	*/
	cout << "How much money do you have?" << endl;
	double userMoney;
	cin >> userMoney;
	cout << "That is " << userMoney * YEN_PER_DOLLAR << " yen, and " << userMoney * EUROS_PER_DOLLAR << " euros." << endl;
	return 0;
}
