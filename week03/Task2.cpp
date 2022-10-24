#include <iostream>
using namespace std;

int main()
{
  char myCharr;
	cout << "Enter character: ";
	cin >> myCharr;

	if (myCharr >= 'A' && myCharr <= 'Z')
	{
		char temp = myCharr + 32;
		cout << "Lower char is " << temp << endl;
	}
	else if (myCharr >= 'a' && myCharr <= 'z')
	{
		char temp = myCharr - 32;
		cout << "Upper char is: " << temp << endl;
	}
}
