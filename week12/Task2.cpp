#include <iostream>

using namespace std;

void printReverse(char* arr, int index)
{
	if (!arr[index]) {
		return;
	}
	printReverse(arr, index + 1);
	cout << arr[index] << ", ";

}

int main()
{
	size_t n;
	cin >> n;
	char* str = new char[n+1];

	for (int i = 0; i < n; i++) 
	{
		cin >> str[i];
	}
	
	printReverse(str, 0);

	delete[] str;
}

