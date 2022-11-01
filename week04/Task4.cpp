#include <iostream>
using namespace std;

int main()
{   
    int num;
    cout << "Enter number: ";
    cin >> num;
    while (num > 0) 
    {
        cout << (num % 10);
        num /= 10;
    }
  
  //Ако обаче искаме да запазим обърнатото число в променлива решението ще изглежда така:
     int result = 0;
     while(num > 0)
     {
        result = result * 10 + num % 10;
        num /= 10;
     }
     cout << "Reversed number is: " << result << endl;

}
