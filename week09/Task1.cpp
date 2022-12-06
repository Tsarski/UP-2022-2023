#include <iostream>

using namespace std;

bool isZigZag(int *arr, size_t size)
{
	for (int i = 0; i < size-1; i++) 
	{
		if (i % 2 == 0 && arr[i] > arr[i + 1]) {
			return false;
		}
		if (i % 2 == 1 && arr[i] < arr[i + 1]) {
			return false;
		}
	}
  return true;
}

int main()
{
	size_t size;
	cout << "Enter line length: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	}

	bool isZig = isZigZag(arr, size);

	cout << "Is zig zag: " << boolalpha << isZig << endl;

	delete[] arr;  
}
