#include <iostream>
using namespace std;

int main()
{
	/*
		Kathryn bought 600 shares of stock at a price of $21.77 per share. A year later she sold
		them for just $16.44 per share. Write a program that calculates and displays the following:
			• The total amount paid for the stock.
			• The total amount received from selling the stock.
			• The total amount of money she lost.
		*/
	int numOfShares = 600;
	double purchasePrice = 21.77;
	double sellPrice = 16.44;
	double purchaseTotal = numOfShares * purchasePrice;
	double sellTotal = numOfShares * sellPrice;
	double gains = sellTotal - purchaseTotal;
	cout << "Kathryn bought " << numOfShares << " shares of stock at a price of $" << purchasePrice << " per share." << endl;
	cout << "A year later she sold them for just $" << sellPrice << " per share." << endl;
	cout << "Kathryn paid $" << purchaseTotal << " for the stock." << endl;
	cout << "Kathryn recieved $" << sellTotal << " for selling the stock." << endl;
	cout << "Kathryn lost $" << abs(gains) << " when she sold the stock." << endl;


	return 0;
}
