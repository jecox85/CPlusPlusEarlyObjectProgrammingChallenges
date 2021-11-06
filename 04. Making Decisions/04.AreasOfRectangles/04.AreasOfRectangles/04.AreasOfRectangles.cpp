#include <iostream>
using namespace std;

int main()
{
	/*
	*	The area of a rectangle is the rectangle's length times its width. Write a program that asks for
	*	the length and width of two rectangles. The program should then tell the user which
	*	rectangle has the greater area, or if the areas are the same.
	*/
	double length1, width1, area1, length2, width2, area2;
	do {
		cout << "Please enter the length and width of the first rectangle separated by a space.\n";
		cin >> length1 >> width1;
	} while (length1 <= 0 || width1 <= 0);
	area1 = length1 * width1;
	do {
		cout << "Please enter the length and width of the second rectangle separated by a space.\n";
		cin >> length2 >> width2;
	} while (length2 <= 0 || width2 <= 0);
	area2 = length2 * width2;
	if (area1 > area2)
		cout << "The first rectangle is larger.\n";
	else if (area1 < area2)
		cout << "The second rectangle is larger.\n";
	else 
		cout << "The rectangles are the same size.\n";
	return 0;
}
