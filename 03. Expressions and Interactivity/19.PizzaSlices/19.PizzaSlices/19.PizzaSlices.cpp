#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
		Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any size can
		be divided into. The program should perform the following steps:
			A) Ask the user for the diameter of the pizza in inches.
			B) Calculate the number of slices that may be taken from a pizza of that size if each
			slice has an area of 14.125 square inches.
			C) Display a message telling the number of slices.
		The number of square inches in the total pizza can be calculated with this formula:
			Area = PI * r ^ 2
		where variable r is the radius of the pizza and PI is the Greek letter PI. In your program
		make PI a named constant with the value 3.14. Display the number of slices as a whole
		number (i.e., with no decimals).
	*/

	const double PI = 3.14;
	const double sliceArea = 14.125;
	double radius, area;
	int numSlices;
	cout << "What is the diameter of the pizza?\n";
	cin >> radius;
	radius /= 2;
	area = PI * pow(radius, 2);
	numSlices = static_cast<int>(area / sliceArea);
	cout << "You can get " << numSlices << " slices from that pizza." << endl;

	return 0;
}