#include <iostream>
using namespace std;

int main()
{
	/*	An online book club awards points to its customers based on the number of books purchased
	*	each month. Points are awarded as follows :
	*		Books Purchased		Points Earned
	*			0					0
	*			1					5
	*			2					15
	*			3					30
	*		4 or more				60
	*
	*	Write a program that asks the user to enter the number of books purchased this month and
	*	then displays the number of points awarded.
	*/
	int books= -1;
	do {
		cout << "Enter the number of books purchased this month\n";
		cin >> books;
	} while (books < 0);
	switch (books) {
		case 0:
			cout << "You've earned 0 points.\n";
			break;
		case 1:
			cout << "You've earned 5 points.\n";
			break;
		case 2:
			cout << "You've earned 15 points.\n";
			break;
		case 3:
			cout << "You've earned 30 points.\n";
			break;
		default:
			cout << "You've earned 60 points.\n";
			break;
	}
	return 0;
}
