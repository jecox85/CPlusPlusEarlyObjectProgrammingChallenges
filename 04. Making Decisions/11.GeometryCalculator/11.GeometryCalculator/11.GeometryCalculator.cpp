#include <iostream>
using namespace std;

int main()
{
	/*
	*	Write a program that displays the following menu:
	*	Geometry Calculator
	*		1. Calculate the Area of a Circle
	*		2. Calculate the Area of a Rectangle
	*		3. Calculate the Area of a Triangle
	*		4. Quit
	*	
	*	Enter your choice (1-4):
	*
	*	If the user enters 1, the program should ask for the radius of the circle and then display its
	*	area. Use 3.14159 for PI. If the user enters 2, the program should ask for the length and
	*	width of the rectangle, and then display the rectangle's area. If the user enters 3, the
	*	program should ask for the length of the triangle's base and its height, and then display its
	*	area. If the user enters 4, the program should end.
	*	Input Validation: Decide how the program should handle an illegal input for the
	*	menu choice or a negative value for any of the other inputs.
	*/
	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n\n";
	const double PI = 3.14159;
	int userChoice;
	double radius, length, width, height, base;
	do {
		cout << "Enter your choice (1-4): ";
		cin >> userChoice;
		if (userChoice < 1 || userChoice > 4)
			cout << "That is not a valid selection\n";
	} while (userChoice < 1 || userChoice > 4);
	switch (userChoice) {
		//circle
		case 1:
			do {
				cout << "Please enter the radius for the circle.\n";
				cin >> radius;
				if (radius <= 0)
					cout << "That is not a valid selection\n";
			} while (radius <= 0);
			cout << "The area of your circle is " << PI * radius * radius << endl;
			break;
		//rectangle
		case 2:
			do {
				cout << "Please enter the length and width of your rectangle each separated by a space.\n";
				cin >> length >> width;
				if (width <= 0 || length <= 0)
					cout << "That is not a valid selection\n";
			} while (width <= 0 || length <= 0);
			cout << "The area of your rectangle is " << length * width << endl;
			break;
		//triangle
		case 3:
			do {
				cout << "Please enter the base and height of your triangle each separated by a space.\n";
				cin >> base >> height;
				if (base <= 0 || height <= 0)
					cout << "That is not a valid selection\n";
			} while (base <= 0 || height <= 0);
			cout << "The area of your triangle is " << .5 * base * height << endl;
			break;
		//quit
		case 4:
			//there isn't a loop to exit, so I should have to do anything here.
			break;
		default:
			//The error checking on teh choice should prevent this from being selected.
			cout << "Something went wrong.  This shouldn't happen.\n";
			break;			
	}

	return 0;
}
