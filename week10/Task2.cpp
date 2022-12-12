#include <iostream>

using namespace std;

int indexCountFunc(int* arr1, int* arr2, size_t s1, size_t s2) {
	int indexCount = 0;

	for (int i = 0; i < s1 && i < s2; i++)
	{
		if (arr1[i] == arr2[i]) {
			indexCount++;
		}
	}
	return indexCount;
}

int countEquals(int* arr1, int* arr2, size_t s1, size_t s2) {
	int counter = 0;
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			if (arr1[i] == arr2[j]) {
				counter++;
			}
		}
	}
	return counter;
}

int main() {
	size_t s1, s2;

	cin >> s1;
	cin >> s2;

	int* arr1 = new int[s1];
	int* arr2 = new int[s2];

	for (int i = 0; i < s1; i++) 
	{
		cout << "Enter number for arr1: ";
		cin >> arr1[i];
	}

	for (int i = 0; i < s2; i++)
	{
		cout << "Enter number for arr2: ";
		cin >> arr2[i];
	}


	cout << "Equals by index = " << indexCountFunc(arr1, arr2, s1, s2) << endl;
	cout << "Equal elements = " << countEquals(arr1, arr2, s1, s2) << endl;


	delete[] arr1;
	delete[] arr2;
}
