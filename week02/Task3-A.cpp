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

    bool isDifferent = (lastD != secondD) && (lastD != thirdD)
       && (lastD != fourthD) && (secondD != thirdD) && (secondD != fourthD)
       && (thirdD != fourthD);
  
    if(isDifferent)
    {
      cout << "All numbers are different" << endl;
    }
    else
    {
      cout << "Not all numbers are different" << endl;
    }
}
