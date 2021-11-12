#include <iostream>
#include <cmath>
using namespace std;

class widgetManufacuring {
	private:
		const int widgetsPerHour = 8;
		const int hoursPerDay = 16;
		int widgets;
	public:
		widgetManufacuring() {
			widgets = 0;
		}
		widgetManufacuring(int w) {
			widgets = w;
		}
		int getDays() {
			double widgetsPerDay = static_cast<double>(widgetsPerHour) * static_cast<double>(hoursPerDay);
			//number of widgets / widgets per day = days needed.
			double daysNeeded = static_cast<double>(widgets) / widgetsPerDay;
			//round up to get the number of full days needed.
			daysNeeded = ceil(daysNeeded);
			//return should be an int.
			return static_cast<int>(daysNeeded);
		}

};
int main()
{
	/*
		Design a class for a widget manufacturing plant. Assuming that 10 widgets may be produced
		each hour, the class object will calculate how many days it will take to produce any number
		of widgets. (The plant operates two 8 - hour shifts per day.) Write a program that asks the user
		for the number of widgets that have been ordered and then displays the number of days it
		will take to produce them. Think about what values your program should accept for the
		number of widgets ordered.
			
	*/
	int widgets;
	cout << "Enter the number of widgets that have been ordered." << endl;
	cin >> widgets;
	int days = widgetManufacuring(widgets).getDays();
	(days > 1) ? cout << "That will take " << days << " days to manufacture." << endl : cout << "That will take " << days << " day to manufacture." << endl;
	return 0;
}
