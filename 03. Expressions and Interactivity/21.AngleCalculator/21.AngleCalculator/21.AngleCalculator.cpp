#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	/*	
	*	Write a program that asks the user for an angle, entered in radians.  The program should
	*	then display the sine, cosine, and tangent of the angle. (Use the sin, cos, and tan library
	*	functions to determine these values.) The output should be displayed in fixed - point
	*	notation, rounded to four decimal places of precision.
	*/
	double angle;
	cout << "Please enter an angle.\n";
	cin >> angle;
	cout << fixed;
	cout << "The sine of " << angle << " = " << setprecision(4) << sin(angle)<< endl;
	cout << "The cosine of " << angle << " = " << setprecision(4) << cos(angle) << endl;
	cout << "The tangent of " << angle << " = " << setprecision(4) << tan(angle) << endl;

	return 0;
}
