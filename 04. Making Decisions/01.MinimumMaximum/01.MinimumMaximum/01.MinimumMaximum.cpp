#include <iostream>
using namespace std;

int main()
{
	/*
	*	Write a program that asks the user to enter two numbers. The program should use the
	*	conditional operator to determine which number is the smaller and which is the larger.
	*/
	int num1, num2;
	cout << "Please enter two integers with a space between each one.\n";
	cin >> num1 >> num2;
	cout << (num1 > num2 ? num1 : num2) << " is larger." << endl;
	return 0;
}
