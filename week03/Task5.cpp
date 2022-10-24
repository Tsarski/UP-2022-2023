#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter year: ";
	cin >> year;

	if (year % 4 == 0 ) {
		if (year % 100 == 0 && year % 400 != 0) {
			cout << "not leap" << endl;
		}
		else 
		{
			cout << "Leap year" << endl;
		}
	}
	else {
		cout << "Not leap " << endl;
	}
}
