#include <iostream>
using namespace std;

int main()
{
	//	During the past decade ocean levels have been rising faster than in the past, an average of
	//	approximately 3.1 millimeters per year. Write a program that computes how much ocean
	//	levels are expected to rise during the next 20 years if they continue rising at this rate.
	//	Display the answer in both centimetersand inches.
	// 1 mm = .03937 inches
	double rate = 3.1; // mm / year
	cout << "Over the next 20 years the oceans will rise " << rate * 20 << " mm, or " << rate * 20 * .03937 << " inches." << endl;
	return 0;
}
