#include <iostream>
#include <cctype>
#include <conio.h>

using namespace std;

int main()
{
	char ch;

	cout << "please enter a character (enter . to stop)" << endl;

	do
	{
		// getting the character from the console.
		ch = getch();	// doesn't echo the input from the keyboard
		// ch = getche();	// echoes the input from the keyboard

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

/*  Both getch() and getche() are functions declared inside the conio.h file
*	
*	getch() simply takes the input from the keyboard without showing the use what 
*	he has give input.
*
*	while getche() echoes the input the use has given.
*
*	Both of these functions shows the output immediately without the need of 
*	pressing enter, pressing enter just takes newline as a character.
*/