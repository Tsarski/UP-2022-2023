#include <iostream>
using namespace std;

int main()
{
  char myChar;
	cout << "Enter character";
	cin >> myChar;

	switch (myChar)
	{
	case 'I': cout << "1"<< endl;
		break;
	case 'V': cout << "5" << endl;
		break;
	case 'X': cout << "10" << endl;
		break;
	case 'L': cout << "50" << endl;
		break;
	case 'C': cout << "100" << endl;
		break;
	default: cout << "Not a number" << endl;
		break;
	}
}
