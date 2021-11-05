#include <iostream>
using namespace std;

int main()
{
	/*
	A car with a 20 gallon gas tank averages 21.5 miles per gallon when driven in town and
	26.8 miles per gallon when driven on the highway.  Write a program that calculates and
	displays the distance the car can travel on one tank of gas when driven in town and when
	driven on the highway.
	*/
	double gasTank = 20;
	double mpgTown = 21.5;
	double mpgHighway = 26.8;
	cout << "We have a car with a " << gasTank << " gallon gas tank." << endl;
	cout << "The car gets " << mpgTown << " mpg in town and " << mpgHighway << " mpg on the highway." << endl;
	cout << "This car can go " << gasTank * mpgTown << " miles in town before refilling." << endl;
	cout << "This car can go " << gasTank * mpgHighway << " miles on the highway before refilling." << endl;
	return 0;
}
