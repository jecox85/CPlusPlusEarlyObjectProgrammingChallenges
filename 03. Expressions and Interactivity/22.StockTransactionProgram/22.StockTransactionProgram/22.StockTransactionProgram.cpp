#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	/* 
	*	Last month Joe purchased 100 shares of stock.  Here are the details of the purchase :
	*		• When Joe purchased the stock, he paid $32.87 per share.
	*		• Joe paid his stock broker a commission that amounted to 2% of the amount he paid
	*		for the stock.
	*	Two months later Joe sold the stock. Here are the details of the sale :
	*		• He sold the stock for $33.92 per share.
	*		• He paid his stock broker another commission that amounted to 2 % of the amount he
	*		received for the stock.
	*	Write a program that displays the following information :
	*		• The amount of money Joe paid for the stock.
	*		• The amount of commission Joe paid his broker when he bought the stock.
	*		• The amount that Joe sold the stock for.
	*		• The amount of commission Joe paid his broker when he sold the stock.
	*		• The amount of profit or loss that Joe had after selling his stock and paying both
	*		broker commissions.
	*/
	double purchasePrice = 32.87;
	double sellPrice = 33.92;
	double commissionRate = .02;
	int numOfShares = 100;
	double totalPaid = (purchasePrice * numOfShares) * (1 + commissionRate);
	double totalRecieved = (sellPrice * numOfShares) * (1 - commissionRate);
	double gain = totalRecieved - totalPaid;
	cout << fixed;
	cout << left << setw(31) << "Joe paid:" << "$ " << right << setw(7) << setprecision(2) << totalPaid << endl;
	cout << left << setw(31) << "Commission paid on purchase:" << "$ " << right << setw(7) << setprecision(2) << totalPaid - (purchasePrice * numOfShares) << endl;
	cout << left << setw(31) << "Stocks sold for a total of :" << "$ " << right << setw(7) << setprecision(2) << totalRecieved << endl;
	cout << left << setw(31) << "Commission paid on sale:" << "$ " << right << setw(7) << setprecision(2) << (sellPrice * numOfShares) - totalRecieved << endl;
	if (gain > 0) {
		cout << "Joe profitted $" << setprecision(2) << gain << " from stocks." << endl;
	}
	else {
		cout << "Joe lost $" << setprecision(2) << abs(gain) << " from stocks." << endl;
	}
	return 0;
}
