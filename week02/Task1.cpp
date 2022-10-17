#include <iostream>
using namespace std;

int main()
{    
    int a;
    int b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    bool t = (a % b == 0);
    cout << boolalpha << t << endl;
}
