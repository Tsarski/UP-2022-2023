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
  int arr[2][3] = { {2, 3, 3}, {4, 8, 4} };
    int arrSum[2] = { 0 , 0 };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrSum[i] += arr[i][j];
        }
    }
    printSingleArray(arrSum, sizeof(arrSum) / 4);
}
