#include <iostream>
#include <cstring>

using namespace std;

int length(char* str) 
{
	int counter = 0;
	int size = sizeof(str);
	while (str[counter] != '\0') 
	{
		counter++;
	}
	return counter;
}

bool compare(char* str1, char* str2)
{
	int count = 0;
	if (length(str1) != length(str2)) {
		return false;
	}
	while (str1[count] != '\0' && str2[count] != '\0')
	{
		if (str1[count] != str2[count]) {
			return false;
		}
		count++;
	}
	return true;
}

void copy(char* str1, char* str2)
{
	int size = sizeof(str1) / sizeof(str1[0]);
	if (size > length(str2)) 
	{
		int i = 0;
		while (str2[i] != '\0')
		{
			str1[i] = str2[i];
			i++;
		}
		str1[i] = '\0';
	}
}

int main()
{	
	int count = 0;
	char longest[100]{ "\0" };
	char stop[]{ "stop" };
	while (true) {
		char temp[100];
		cin.getline(temp, 100);
		count++;
		if (compare(temp, stop)) {
			break;
		}
		if (length(longest) < length(temp)) {
			copy(longest, temp);
		}
	}

	cout << "Longest string = " << longest << endl;
	cout << "Length of longest = " << length(longest) << endl;
	cout << "Entered strings = " << count << endl;
}
