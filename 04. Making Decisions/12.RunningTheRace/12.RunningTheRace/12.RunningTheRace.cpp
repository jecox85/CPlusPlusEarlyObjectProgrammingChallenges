#include <iostream>
#include <string>
using namespace std;

struct runner {
	string name;
	double time;
};
void swap(runner* xp, runner* yp) {
	runner temp = *xp;
	*xp = *yp;
	*yp = temp;
}
//sort an array of runner structs
void runnerSort(runner arr[], int length) {
	if (length <= 1) {
		return;
	}
	int i, j, minLocation;
	for ( i = 0; i < length; i++) {
		minLocation = i;
		for ( j = i + 1; j < length; j++) {
			if (arr[j].time < arr[minLocation].time)
				minLocation = j;
			//swap
			swap(&arr[minLocation], &arr[i]);
		}
	}
}
int main()
{
	/*	Write a program that asks for the names of three runners and the time it took each of them
	*	to finish a race. The program should display who came in first, second, and third place.
	*	Think about how many test cases are needed to verify that your problem works correctly.
	*	(That is, how many different finish orders are possible?)
	*		
	*		Input Validation: Only allow the program to accept positive numbers for the times.
	*
	*/

	runner racers[3];
	cout << "What is the name of the first runner? " << endl;
	getline(cin, racers[0].name);
	cout << "What is the first runner's time?" << endl;
	cin >> racers[0].time;
	//skipping newline character that was left in buffer in the cin
	cin.ignore();
	cout << "What is the name of the second runner? " << endl;
	getline(cin, racers[1].name);
	cout << "What is the second runner's time?" << endl;
	cin >> racers[1].time;
	//skipping newline character that was left in buffer in the cin
	cin.ignore();
	cout << "What is the name of the third runner? " << endl;
	getline(cin, racers[2].name);
	cout << "What is the third runner's time?" << endl;
	cin >> racers[2].time;
	//skipping newline character that was left in buffer in the cin
	cin.ignore();
	runnerSort(racers, 3);
	for (int i = 0; i < 3; i++) {
		cout << "Runner " << racers[i].name << " came in position " << i + 1 << " with a time of " << racers[i].time << endl;
	}
	


	return 0;
}
