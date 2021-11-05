#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	/*
		Write a program that can be used as a math tutor for a young student. The program should
		display two random numbers between 1 and 9 to be added, such as
			  2
			+ 1
		After the student has entered an answer and pressed the [Enter] key, the program should
		display the correct answer so the student can see if his or her answer is correct.
	*/
	srand(time(0));
	int num1 = (rand() % 9) + 1;
	int num2 = (rand() % 9) + 1;
	int answer = num1 + num2;
	int input;
	cout << "Answer the following: " << endl;
	cout << num1 << " + " << num2 << " = ";
	cin >> input;
	if (input == answer) {
		cout << "Correct!" << endl;
	}
	else
		cout << "Sorry, the answer is " << answer << endl;
	return 0;
}
