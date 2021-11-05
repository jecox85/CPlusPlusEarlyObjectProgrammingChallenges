#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	/*
		A movie theater only keeps a percentage of the revenue earned from ticket sales. The
		remainder goes to the distibutor. Write a program that calculates a theater's gross and net
		box office profit for a night. The program should ask for the name of the movie, and how
		many adult and child tickets were sold. (The price of an adult ticket is $6.00 and a child's
		ticket is $3.00.) It should display a report similar to the following:
		
			Movie Name:						"Wheels of Fury"
			Adult Tickets Sold:				382
			Child Tickets Sold:				127
			Gross Box Office Profit:		$2673.00
			Amount Paid to Distributor:		-$2138.40
			Net Box Office Profit:			$534.60
		
		Assume the theater keeps 20 percent of the gross box office profit.
	*/
	cout << "Welcome to your box office tracker." << endl;
	string name;
	int adultTickets, childTickets;
	double adultPrice = 6.0, childPrice = 3.0, gross, distributor, net;
	cout << "Please enter movie title.\n";
	getline(cin, name);
	cout << "Please enter number of adult tickets sold.\n";
	cin >> adultTickets;
	cout << "Please enter number of child tickets sold.\n";
	cin >> childTickets;
	gross = (static_cast<double>(adultTickets) * adultPrice) + (static_cast<double>(childTickets) * childPrice);
	net = .2 * gross;
	distributor = gross - net;
	cout << fixed << left;
	cout << setw(32) << "Movie Name:" << "\"" << name << "\"" << endl;
	cout << setw(33) << "Adult Tickets Sold:" << adultTickets << endl;
	cout << setw(33) << "Child Tickets Sold:" << childTickets << endl;
	cout << setw(32) << "Gross Box Office Profit:" << "$" << setprecision(2) << gross << endl;
	cout << setw(31) << "Amount Paid to Distributor:" << "-$" << setprecision(2) << distributor << endl;
	cout << setw(32) << "Net Box Office Profit:" << "$" << setprecision(2) << net << endl;

	return 0;
}
