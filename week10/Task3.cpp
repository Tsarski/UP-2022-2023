#include <iostream>
using namespace std;

int main() 
{
	size_t s;
	cin >> s;
	char* str = new char[s];

	cin.ignore();

	cin.getline(str, s);

	int i = 0;
	while (str[i + 1] != '\0') 
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;

		}
		if (str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

	cout << str;
  
}
