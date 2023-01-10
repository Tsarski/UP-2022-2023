#include <iostream>

using namespace std;

void printStraightDi(int** arr, int size) 
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == 0) {
			max = arr[i][i];
		}
		if (max < arr[i][i]) 
		{
			max = arr[i][i];
		}
		cout << arr[i][i] << " ";
	}
	cout << "Max number = " << max;

}

void printLeftDi(int** arr, int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == 0) {
			max = arr[i][size - 1 - i];
		}
		if (max < arr[i][size - 1 - i])
		{
			max = arr[i][size - 1 - i];
		}
		cout << arr[i][size-1-i] << " ";
	}
	cout << "Max number = " << max;

}

int main()
{
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	bool di;
	cout << "For straigth diagonal enter 1 for left diagonal enter 0";
	cin >> di;

	if (di) {
		printStraightDi(arr, n);
	}
	else {
		printLeftDi(arr, n);
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
 	}
	delete[] arr;
  
}

