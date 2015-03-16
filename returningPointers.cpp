#include <iostream>
#include <cstring>

using namespace std;

char * match(char, char *);

int main()
{
	char str[10], ch, *p;

	cout << "Please enter the string : ";
	gets(str);

	cout << "Please enter a character :";
	ch = getchar();

	p = match(ch, str);

	/*
		If match() return a NULL then we need to check it before printing
		else the program will crash
		*/
	if(*p)
		cout << p;

	return 0;
}

char * match(char ch, char *str)
{
	return (strchr(str,ch));
}