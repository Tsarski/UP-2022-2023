#include <iostream>

using namespace std;

void printPairsWithSmallerSum(int* arr, size_t size, int maxSum)
{
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] + arr[i + 1] <= maxSum)
		{
			cout << arr[i] << " " << arr[i + 1] << endl;
		}
	}
}

int main()
{
	int n, k;
	cout << "Enter number of elements: ";
	cin >> n;
	int* arr = new int[n];

	cout << "Enter max sum (k): ";
	cin >> k;

	for (int i = 0; i < n; i++) 
	{
		cout << "Enter element " << i << " :";
		cin >> arr[i];
	}

	printPairsWithSmallerSum(arr, n, k);

	delete[] arr;
 }

