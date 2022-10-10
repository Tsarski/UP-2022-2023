#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	// Task 1 
	int num;
	cin >> num;
	
	int first = num / 100;
	int second = num / 10 % 10;
	int third = num % 10;

	cout << "First digit: " << first << endl;
	cout << "Second digit: " << second << endl;
	cout << "Third digit: " << third << endl;
	cout << "Sum: " << first + third + second << endl;

}

