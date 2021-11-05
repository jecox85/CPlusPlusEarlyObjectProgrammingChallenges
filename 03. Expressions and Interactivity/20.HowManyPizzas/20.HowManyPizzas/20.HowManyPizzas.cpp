#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	*	Project 19:
	*	Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any size can
	*	be divided into. The program should perform the following steps:
	*		A) Ask the user for the diameter of the pizza in inches.
	*		B) Calculate the number of slices that may be taken from a pizza of that size if each
	*		slice has an area of 14.125 square inches.
	*		C) Display a message telling the number of slices.
	*	The number of square inches in the total pizza can be calculated with this formula:
	*		Area = PI * r ^ 2
	*	where variable r is the radius of the pizza and PI is the Greek letter PI. In your program
	*	make PI a named constant with the value 3.14. Display the number of slices as a whole
	*	number (i.e., with no decimals).
	* 
	*	Project 20:
	*	Modify the program you wrote in Programming Challenge 19 so that it reports the number
	*	of pizzas you need to buy for a party if each person attending is expected to eat an average
	*	of 4 slices. The program should ask the user for the number of people who will be at the
	*	party and for the diameter of the pizzas to be ordered. It should then calculate and display
	*	the number of pizzas to purchase. Because it is impossible to buy a part of a pizza, the
	*	number of required pizzas should be displayed as a whole number.
	*
	*/

	const double PI = 3.14;
	const double sliceArea = 14.125;
	double radius, area;
	int numSlices, people, totalSlices, totalPizzas;
	cout << "How many people are attending your party?\n";
	cin >> people;
	totalSlices = people * 4;
	cout << "What is the diameter of the pizza?\n";
	cin >> radius;
	radius /= 2;
	area = PI * pow(radius, 2);
	numSlices = static_cast<int>(area / sliceArea);
	totalPizzas = static_cast<int>(ceil(static_cast<double>(totalSlices) / static_cast<double>(numSlices)));
	cout << "You should buy " << totalPizzas << " pizzas.";
	return 0;
}