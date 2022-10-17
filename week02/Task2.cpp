#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter value for a: ";
    cin >> a;
    bool t = (a % 2 == 0) && (a % 5 == 0) && (a % 3 == 0);
    cout << boolalpha << t << endl;
}
