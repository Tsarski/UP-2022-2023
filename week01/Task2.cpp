#include <iostream>

using namespace std;

int main() {
	int a, b, c;


	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	//Solution with third variable
	c = b;
	b = a;
	a = c;

	//Solution without third variable
	/*
	a = a + b;
	b = a - b;
	a = a - b;
	*/
	
	cout << "a: " << a << ", b: " << b << endl;
}