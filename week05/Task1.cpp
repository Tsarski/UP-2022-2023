#include <iostream>
using namespace std;

double precise(double num) 
{
    int temp = num * 100;
    double temp2 = temp;
    return temp2 =/ 100;
}

int main()
{
    double num;
    cout << "Enter double: ";
    cin >> num;
    cout << "Precised number: " << precise(num) << endl;
}
