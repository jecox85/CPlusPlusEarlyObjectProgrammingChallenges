#include <iostream>
using namespace std;

void printTests(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}
}
int main()
{
    /*
		Write a program that dynamically allocates an array large enough to hold a user - defined
		number of test scores.  Once all the scores are entered, the array should be passed to a
		function that sorts them in ascending order.  Another function should be called that
		calculates the average score.  The program should display the sorted list of scores and
		averages with appropriate headings.  Use pointer notation rather than array notation
		whenever possible.
		Input Validation : Do not accept negative numbers for test scores.
	*/
	int testNum;
	do {
		cout << "How many tests are there?" << endl;
		cin >> testNum;
		if (testNum < 1)
			cout << "The number of tests must be greater than 0;\n";
	} while (testNum < 1);
	int* testScores;
	testScores = new int[testNum];
	int	tempTest;
	int userCount = 0;
	while(userCount < testNum){
		do {
			cout << "Enter the test score" << endl;
			cin >> tempTest;
			if (tempTest < 0 || tempTest > 100)
				cout << "That is not a valid test score;" << endl;
		} while (tempTest < 0 || tempTest > 100);
		testScores[userCount] = tempTest;
		userCount++;
	}
	printTests(testScores, testNum);
}