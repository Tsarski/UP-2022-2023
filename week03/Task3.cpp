#include <iostream>
using namespace std;

int main()
{
  int myNum;
  cout << "Ener number from 1 to 12: ";
	cin >> myNum;
	switch (myNum) 
	{
	case 1 : cout << "January" << endl;
		break;
	case 2 : cout << "February" << endl;
		break;
	case 3 : cout << "March" << endl;
		break;
	case 4 : cout << "April" << endl;
		break;
	case 5 : cout << "May" << endl;
		break;
	case 6 : cout << "June" << endl;
		break;
	case 7 : cout << "July" << endl;
		break;
  case 8 : cout << "August" << endl;
      break;
  case 9 : cout << "September" << endl;
      break;
  case 10 : cout << "October" << endl;
      break;
  case 11 : cout << "November" << endl;
      break;
  case 12 : cout << "December" << endl;
      break;
	default: cout << "Number out of range" << endl;
      break;
	}
}
