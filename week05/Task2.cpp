#include <iostream>
using namespace std;

int sumDigits(int num) 
{
    int sum = 0;
    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int returnBigger(int num1, int num2)
{
    if (num1 > num2) 
    {
        return num1;
    }
    else {
        return num2;
    }
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int sum1 = sumDigits(a);
    int sum2 = sumDigits(b);
    if (sum1 == returnBigger(sum1, sum2))
    {
        cout << "a has bigger sum, a = " << a << endl;

    }
    else if (sum2 == returnBigger(sum1, sum2)) 
    {
        cout << "b is bigger, or a and b have equal values of sums, b = " << b << endl;
    }
    return 0;
}
