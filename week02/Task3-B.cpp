#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter four-digit number: ";
    cin >> number;
    int lastD = number % 10;
    int secondD = number / 10 % 10;
    int thirdD = number / 100 % 10;
    int fourthD = number / 1000;

    bool hasOddNumber = (lastD % 2 == 1) || (secondD % 2 == 1) || (thirdD % 2 == 1) || (fourthD % 2 == 1);

    if (hasOddNumber) {
        cout << "Has an odd number" << endl;
        // cout << " It's true "<< endl;

    }
    else {
        cout << "Doesn't have an odd number" << endl;
        // cout << "It's not true" << endl; 

    }
}
