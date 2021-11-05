#include <iostream>
using namespace std;

int main()
{
	//	The Earth's ocean levels have risen an average of 1.8 millimeters per year over the past
	//	century.  Write a program that computes and displays the number of centimeters and
	//	number of inches the oceans rose during this time.  One millimeter is equivalent to 0.1
	//	centimeters. One centimeter is equivalent to 0.3937 inches.
	// 1 mm = .03937 inches
	double rate = 1.8; //	mm/year
	cout << "The last century the ocean levels have risen " << rate * 100 << " mm, or " << rate * 100 * .03937 << " inches." << endl;
	return 0;
}
