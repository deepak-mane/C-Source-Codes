#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s1[80], s2[80];
	char *p, *q;

	cout << "please enter string one  :" << endl;
	gets(s1);

	cout << "please enter string two  :" << endl;
	gets(s2);

	cout << endl << "length of string s1 is :" << strlen(s1) << endl << "length of string s2 is :" << strlen(s2) << endl;

	cout <<  "comparing strings ..." << endl;

	if( !(strcmp(s1, s2)))
		cout << "equal strings";

	else
		cout << "enequal strings";
	
	cout << endl << "concatenating two strings";
	strcat(s1, s2);
	cout << endl << "concatenated string is :   " << s1;

	cout << endl << "copying string s2 to s1";
	strcpy(s1, s2);
	cout << endl << "copied string is :   " << s1;

	cout << endl << "finding a character inside a string";
	if(p = strchr(s1, 'd'))
	{
		cout << "\npointer pointing to address :" << p;
		cout << "\nvalue at address :" << p << " is " << *p;
		cout << endl << "pointer returned and character found";		
	}
	else
		cout << "not found";

	cout << endl << "finding a string inside a string";
	if(q = strstr(s1, "ad"))
	{
		cout << "\npointer pointing to address :" << q;
		cout << "\nvalue at address :" << q << " is " << *q;
		cout << endl << "pointer returned and string found";
	}
	else
		cout << "not found";

	return 0;
}