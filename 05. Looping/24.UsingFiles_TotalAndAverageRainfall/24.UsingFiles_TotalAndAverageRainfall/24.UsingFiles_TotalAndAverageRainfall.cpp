#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*	
		Write a program that reads in from a file a starting month name, an ending month name,
		and then the monthly rainfall for each month during that period.  As it does this, it should
		sum the rainfall amounts and then report the total rainfall and average rainfall for the
		period. For example, the output might look like this:
		During the months of March - June the total rainfall was 7.32 inches and the average
		monthly rainfall was 1.83 inches.
		Data for the program can be found in the Rainfall.txt file.
		Hint : After reading in the month names, you will need to read in rain amounts until
		the EOF is reached, and count how many pieces of rain data you read in.
	*/
	ifstream fin;
	fin.open("Rainfall.txt");
	if (fin) {
		double total = 0;
		double current;
		double average;
		int num = 0;
		string month1, month2;
		fin >> month1;
		fin >> month2;
		while (fin >> current) {
			total += current;
			num++;
		}
		average = total / num;
		cout << "During the months of " << month1 << " - " << month2 << " the total rainfall was " << total
			<< " inches and the average monthly rainfall was " << average << " inches." << endl;
		fin.close();
	}
	else {
		cout << "There was an error opening the file.\n";
	}

	return 0;
}
