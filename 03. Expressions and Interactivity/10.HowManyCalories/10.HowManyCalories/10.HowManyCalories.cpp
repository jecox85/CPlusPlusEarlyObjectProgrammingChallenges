#include <iostream>
using namespace std;

int main()
{
	/*
		A bag of cookies holds 40 cookies.  The calorie information on the bag claims that there are
		10 ''servings'' in the bag and that a serving equals 300 calories.  Write a program that asks
		the user to input how many cookies they actually ate and then reports how many total
		calories were consumed.
	*/
	cout << "How many cookies did you eat?\n";
	//1 serving = 300 calories
	//4 cookies per serving
	const double caloriesPerCookie = 300.0 / 4.0;
	int cookies;
	cin >> cookies;
	double caloriesEaten = cookies * caloriesPerCookie;
	cout << "You ate " << caloriesEaten << " calories." << endl;
	return 0;
}