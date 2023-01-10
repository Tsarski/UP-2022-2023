#include <iostream>

using namespace std;

bool checkNumber(int number, int digit) 
{
	if (number == 0) {
		return false;
	}
	if (number % 10 == digit) {
		return true;
	}
	checkNumber(number / 10, digit);
}

int main()
{
  int num, digit;
  cin >> num;
  cin >> digit;
  
  cout << boolalpha << checkNumber(num, digit);
  
}


