/*
	In some programming problems, the program need to continue running, unless
	some action or keyboard event is specified by the user
	so, in those cases kbhit is used.

	we can also get what key is pressed using getchar()
*/
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int NumberLine =1 ;
	bool Abort;
	cout << Abort;
	while(Abort == false)
	{
		Abort = kbhit();
		cout << NumberLine << endl;
		++NumberLine;
	}

	return 0;
}