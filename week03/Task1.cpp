#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter number";
	cin >> number;

	if (number % 2 == 0 && number % 5 == 0)
	{
		cout << "It can be divided by 2 and 5" << endl;
	}
	else if (number % 3 == 0 && number % 5 == 0)
	{
		cout << "It can be divided by 3 and 5" << endl;
	}
	else if (number % 7 == 0) {
		cout << "It can be divided by 7" << endl;
	}
}
