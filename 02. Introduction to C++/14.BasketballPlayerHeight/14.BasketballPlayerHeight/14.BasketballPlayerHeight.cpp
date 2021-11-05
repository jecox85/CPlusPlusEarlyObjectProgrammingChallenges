#include <iostream>
using namespace std;

int main()
{
	// The star player of a high school basketball team is 73 inches tall. Write a program to compute
	//	and display the height in feet / inches form.
	//	Hint: Try using the modulusand integer divide operations.

	int height = 73;  // in inches
	cout << "The basketball player is " << height / 12 << " feet, " << height % 12;
	if (height % 12 == 1) {

		cout << " inch tall." << endl;
	}
	else {
		cout << " inches tall." << endl;
	}
	return 0;
}
