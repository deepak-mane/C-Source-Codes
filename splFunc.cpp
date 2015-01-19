#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
	char ch = 'A';
	char arr[] = "pabitra";
	char ar[] = "350";
	int num;
	// atoi() - Ascii to integer function takes string as argument
	// syntax - int atoi(char *str); // null terminated string or a string constant
	num = atoi(ar);	// result produced is a perfect integer
	cout << num + 10;
	// toupper() - converts a character to its upper case using it's ascii value
	// both parameter and return type are integer.
	// syntax - int toupper(int);
	char value = toupper(ch);
	cout << endl << value;

	return 0;
}