#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int x = 32;
	char s[20], *str;

	cout << "please enter the string\n";
	gets(s);

	str = s;

	for(int space = 0; *str; str++)
	{
		if(*str == (char) x)
		{
			space++;
			continue;
		}
	}

	return 0;
}