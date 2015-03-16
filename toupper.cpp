#include <iostream>
#include <cctype>

using namespace std;

void upperCase(char *);

int main()
{
	char chr[20];

	cout << "please enter the string\n";
	gets(chr);

	upperCase(chr);
	// puts(chr);

	return 0;
}

void upperCase(char *s)
{
	for(int i = 0; s[i]; i++)
		// s[i] = toupper(s[i]);
		putchar(toupper(s[i]));
}