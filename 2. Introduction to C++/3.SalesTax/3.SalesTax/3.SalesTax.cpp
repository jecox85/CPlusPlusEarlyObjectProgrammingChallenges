#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//	Write a program that computes the total sales tax on a $52 purchase.  Assume the state sales
	//	tax is 4 percent and the county sales tax is 2 percent.  Display the purchase price, state tax,
	//	county tax, and total tax amounts on the screen.
	cout << "Total purchase price of a $52 item with a state sales tax of 4 percent, and county sales tax of 2 percent: " << endl;
	double item = 52;
	double stateTax = (52 * .04);
	double countyTax = (52 * .02);
	double total = item + stateTax + countyTax;
	cout << fixed;
	cout << setprecision(2) << "Item:\t\t$"<< item << endl;
	cout << setprecision(2) << "State tax:\t$" << stateTax << endl;
	cout << setprecision(2) << "County tax:\t$" << countyTax << endl;
	cout << setprecision(2) << "Total:\t\t$" << total << endl;
	return 0;
}
