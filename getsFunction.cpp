#include "iostream"
#include "cstring"

using namespace std;

int main()
{
	char str[80];

	do
	{
		// getting the string from the console
		cout << "please enter a string : ";
		gets(str);

		cout << endl;
		puts(str);	
	}
	while(strcmp(str, "abc"));

	return 0;
}