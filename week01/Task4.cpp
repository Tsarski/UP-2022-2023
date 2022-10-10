#include <iostream>
#include <cmath> // <-- This library contains the function sqrt() we use
				 //     to calculate square root.

using namespace std;

int main() {

	int a, b, c;
	int x1, x2;
	int D;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	D = sqrt(b * b - 4 * a * c);

	x1 = (-b + D) / 2 * a;
	x2 = (-b - D) / 2 * a;

	cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
}