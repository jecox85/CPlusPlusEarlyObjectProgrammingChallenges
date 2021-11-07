#include <iostream>
using namespace std;

double fallingDistance(int t);
int main()
{
	/*
		The following formula can be used to determine the distance an object falls due to gravity
		in a specific time period :
			d = .5 * g * t * t;
		The variables in the formula are as follows : d is the distance in meters, g is 9.8, and t is the
		time in seconds that the object has been falling.
		Write a function named fallingDistance that accepts an object's falling time (in
		seconds) as an argument.The function should return the distance, in meters, that the
		object has fallen during that time interval.  Write a program that demonstrates the function
		by calling it in a loop that passes the values 1 through 10 as arguments and displays the
		return value.*/

	for (int i = 1; i <= 10; i++) {
		cout << "After " << i << " seconds of falling, an item will fall " << fallingDistance(i) << " meters."<< endl;
	}
	return 0;
}
double fallingDistance(int t) {
	return (.5 * 9.8 * t * t);
}
