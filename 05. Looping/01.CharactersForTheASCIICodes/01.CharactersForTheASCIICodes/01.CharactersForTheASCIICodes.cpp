#include <iostream>
using namespace std;

int main()
{
	//	Write a program that uses a loop to display the characters for each ASCII code 32 through
	//	127. Display 16 characters on each line with one space between characters.
	for (int i = 32; i <= 127; i++) {
		cout << static_cast<char>(i) << " ";
		if (i % 16 == 15)
			cout << endl;
	}
	return 0;
}
