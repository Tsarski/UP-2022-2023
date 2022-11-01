#include <iostream>
using namespace std;

int main()
{   
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    while (a <= b) 
    {
        if (a % 3 == 2) 
        {
            cout << a << endl;
        }
        a++;
    }
}
