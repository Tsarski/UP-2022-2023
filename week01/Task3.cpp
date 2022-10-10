#include <iostream>

using namespace std;

int main() {
	int a, b;
	int result;
	int lastDigit;

	cout << "Enter a:";
	cin >> a;

	cout << "Enter b:'";
	cin >> b;

	result = a * b;
	lastDigit = result % 10;
	bool isUneven = result % 2;

	cout << "result = " << result << endl;
	cout << "last digit = " << lastDigit << endl;
	cout << "Is uneven: " << boolalpha << isUneven << endl;
}