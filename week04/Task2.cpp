#include <iostream>
using namespace std;

int main()
{   
   int sum = 0;
    
   for (int i = 0; i < 5; i++)
   {
       int num;
       cout << "Enter num: ";
       cin >> num;
       sum += num;
   }

    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << sum / 5 << endl;
}
