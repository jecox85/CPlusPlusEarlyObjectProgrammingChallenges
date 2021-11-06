#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
		The distance a vehicle travels can be calculated as follows :
			distance = speed * time
			
		For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
		120 miles.
		Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
		many hours it has traveled.  It should then use a loop to display the total distance traveled
		at the end of each hour of that time period. Here is an example of the output :
	
			What is the speed of the vehicle in mph ? 40
			How many hours has it traveled ? 3
			Hour	Miles Traveled
			--------------------------------
			1			40		
			2			80
			3			120
	*/
	int speed, hours;
	do {
		cout << "What is the speed of the vehicle in mph? ";
		cin >> speed;
	} while (speed < 1);
	do {
		cout << "How many hours has it traveled? ";
		cin >> hours;
	} while (hours < 1);
	cout << "Hour      Miles Traveled" << endl;
	for (int i = 0; i < 30; i++)
		cout << "-";
	cout << endl;
	for (int i = 1; i <= hours; i++) {
		cout << setw(3) << i << setw(15) << i * speed << endl;
	}

	return 0;
}
