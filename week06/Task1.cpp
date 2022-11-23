#include <iostream>
using namespace std;

void printSingleArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main(){
  int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter number " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
  
    printSingleArray(arr, sizeof(arr)/4);
    cout << endl;
    cout << "Sum = " << sum << endl;
}
