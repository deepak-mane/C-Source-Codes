#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;

	cout << "please enter a character (enter . to stop)" << endl;

	do
	{
		// getting the character from the console.
		ch = getchar();

		// logic to change the lower to upper case and vice-versa.
		if(islower(ch))
			ch = toupper(ch);
		else
			ch = tolower(ch);

		putchar(ch);
		cout << endl;
	}
	while(ch != '.');

	return 0;
}