#include <iostream>
using namespace std;

int main()
{
	/*
		A soft drink company recently surveyed 12,467 of its customers and found that
		approximately 14 percent of those surveyed purchase one or more energy drinks per
		week.  Of those customers who purchase energy drinks, approximately 64 percent of them
		prefer citrus flavored energy drinks.  Write a program that displays the following :
			-The approximate number of customers in the survey who purchase one or more
			energy drinks per week.
			-The approximate number of customers in the survey who prefer citrus flavored
			energy drinks.
		*/
	int numSurveyed = 12467;
	double oneOrMore = .14;
	double citrus = .64;
	cout << numSurveyed << " people were surveyed about their energy drink habits." << endl;
	cout << "Approximately " << (int)(numSurveyed * oneOrMore) << " people surveyed purchase one or more energy drinks a week." << endl;
	cout << "Approximately " << (int)(numSurveyed * citrus) << " people surveyed prefer citrus flavored energy drinks." << endl;

	return 0;
}
