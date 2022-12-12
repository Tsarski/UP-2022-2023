#include <iostream>

using namespace std;

int sumArray(int *arr, size_t size)
{
	int i = 0, sum = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return sum;
}

int findFirstDigit(int num) 
{
	int firstDigit;
	while (num > 0) {
		firstDigit = num % 10;
		num /= 10;
	}
	
	return firstDigit;
}

int main()
{
	size_t size;
	cout << "Enter size of array: ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int sum = sumArray(arr, size);
	int firstDigit = findFirstDigit(sum);
	int firstDigitCounter = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 10 == firstDigit)
		{
			firstDigitCounter++;
		}
	}

	cout << "Result is: " << firstDigitCounter;

	delete[] arr;
}
