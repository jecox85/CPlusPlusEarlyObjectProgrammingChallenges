#include <iostream>
using namespace std;

int main()
{
	/*
	*	Write a program that asks the user to enter a number within the range of 1 through 10.
	*	Use a switch statement to display the Roman numeral version of that number.
	*		Input Validation: Decide how the program should handle an input that is less than 1
	*		or greater than 10.
	*/
	cout << "Enter a number between 1 and 10" << endl;
	int input;
	cin >> input;
	cout << "The roman numeral of your number is: ";
	switch (input) {
		case 1:
			cout << "I" << endl;
			break;
		case 2:
			cout << "II" << endl;
			break;
		case 3:
			cout << "III" << endl;
			break;
		case 4:
			cout << "IV" << endl;
			break;
		case 5:
			cout << "V" << endl;
			break;
		case 6:
			cout << "VI" << endl;
			break;
		case 7:
			cout << "VII" << endl;
			break;
		case 8:
			cout << "VII" << endl;
			break;
		case 9:
			cout << "IX" << endl;
			break;
		default:
			cout << "Error" << endl;
	}

	return 0;
}
