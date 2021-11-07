#include <iostream>
using namespace std;

double kineticEgergy(double mass, double velocity);
int main(){
	/*
		In physics, an object that is in motion is said to have kinetic energy.  The following formula
		can be used to determine a moving object's kinetic energy:
		KE = .5 * m * v * v;
		The variables in the formula are as follows : KE is the kinetic energy in joules, m is the
		object's mass in kilograms, and v is the object's velocity in meters per second.
		Write a function named kineticEnergy that accepts an object's mass (in kilograms) and
		velocity(in meters per second) as arguments. The function should return the amount of
		kinetic energy that the object has. Demonstrate the function by calling it in a program that
		asks the user to enter values for mass and velocity.
	*/
	double mass, velocity;
	do {
		cout << "Please enter a value for mass." << endl;
		cin >> mass;
		if (mass <= 0) {
			cout << "That is not a valid selection." << endl;
		}
	}while (mass <= 0);
	do {
		cout << "Please enter a value for velocity." << endl;
		cin >> velocity;
		if (velocity <= 0) {
			cout << "That is not a valid selection." << endl;
		}
	}while (velocity <= 0);
	cout << "Your object has a kinetic energy of " << kineticEgergy(mass, velocity) << " joules." << endl;
	return 0;
}
double kineticEgergy(double mass, double velocity) {
	return( .5 * mass * velocity * velocity);
}
