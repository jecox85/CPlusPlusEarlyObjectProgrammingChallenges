#include <iostream>
using namespace std;

int main()
{
	/*
		In the United States, land is often measured in square feet.  In many other countries it is
		measured in square meters.  One acre of land is equivalent to 43,560 square feet.  A square
		meter is equivalent to 10.7639 square feet.  Write a program that computes and displays the
		number of square feet and the number of square meters in 1/4 acre of land.
		Hint: Because a square meter is larger than a square foot, there will be fewer square meters in
		1 acre than there are square feet.
	*/
	cout << "1 acre = 43500 square feet." << endl;
	cout << "1 square meter = 10.7639 square feet." << endl;
	cout << "1/4 acre = " << 43500.0 / 4.0 << " square feet." << endl;
	cout << "1/4 acre = " << (43500.0 / 10.7639) / 4.0 << " square meters." << endl;

	return 0;
}
