#include <iostream>

using namespace std;


// Task 1
int fact(int n) {

	if (n < 1) {
		return 1;
	}

	return n * fact(n - 1);
}

// Task 2
int pow(int n, int s) 
{
	if (s < 1) 
	{
		return 1;
	}

	return n * pow(n, s-1);
}

// Task 3
int fib(int n) {

	if (n <= 1) {
		return n;
	}

	return fib(n - 1) + fib(n - 2);
}

// Task 4
bool isPrime(int n, int div) 
{
	if (n % div == 0) 
	{
		return false;
	}
	if (div <= 2) 
	{
		return true;
	}

	return isPrime(n, div - 1);
}

int main()
{
	cout << boolalpha<< isPrime(23, 23 / 2);
}
