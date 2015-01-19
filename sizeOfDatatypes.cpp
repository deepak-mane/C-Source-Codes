#include <iostream>

using namespace std;

int main()
{
	/*	Size of datatypes */

	// size of datatypes
	cout << "\nSize of bool is:" << sizeof (bool) << endl;
	cout << "\nSize of wchar_t is:" << sizeof (wchar_t) << endl;

	cout << "\nSize of Char is: " << sizeof (char);
	cout << "\nSize of Signed Char is: " << sizeof (signed char);
	cout << "\nSize of Unsigned Char is: " << sizeof (unsigned char);
	// cout << "\nSize of Short Char is: " << sizeof (short char);
	// cout << "\nSize of Long Char is: " << sizeof (long char);
	cout << "\nSize of Char * is: " << sizeof (char *) << endl;

	// size of int types
	cout << "\nSize of Int is: " << sizeof (int);
	cout << "\nSize of Signed Int is: " << sizeof (signed int);
	cout << "\nSize of Unsigned Int is: " << sizeof (unsigned int);
	cout << "\nSize of Short Int is: " << sizeof (short int);
	cout << "\nSize of Long Int is: " << sizeof (long int);
	cout << "\nSize of Int * is: " << sizeof (int *) << endl;


	// size of float types
	cout << "\nSize of Float is: " << sizeof (float);
	// cout << "\nSize of Signed Float is: " << sizeof (signed float);
	// cout << "\nSize of Unsigned Float is: " << sizeof (unsigned float);
	// cout << "\nSize of Short Float is: " << sizeof (short float);
	// cout << "\nSize of Long Float is: " << sizeof (long float);
	cout << "\nSize of Float * is: " << sizeof (float *) << endl;


	// size of double types
	cout << "\nSize of Double is: " << sizeof (double);
	// cout << "\nSize of Signed Double is: " << sizeof (signed double);
	// cout << "\nSize of Unsigned Double is: " << sizeof (unsigned double);
	// cout << "\nSize of Short Double is: " << sizeof (short double);
	cout << "\nSize of Long Double is: " << sizeof (long double);
	cout << "\nSize of Double * is: " << sizeof (double *) << endl;

	// size of string type
	string s ("pabitra is a good boy");
	cout << "\nSize of String is: " << sizeof s << endl;

	// size of integer array
	int arr[5] = {1,2,3,4,5};
	// size depends on the no. of elements multiplied by size of the base type
	cout << "\nSize of sized integer array is: " << sizeof arr;
	// size depends on the no. of elements multiplied by size of the base type
	int arr1[] = {1,2,3,4,5};
	cout << "\nSize of unsized integer array is: " << sizeof arr1 << endl;

	// size of character array / Null-terminated strings
	char chr[2] = {'a','b'};
	// size depends on the no. of elements multiplied by size of the base type
	cout << "\nSize of sized character array is: " << sizeof chr;
	char chr1[] = {'a','b','c'};
	// size depends on the no. of elements multiplied by size of the base type
	cout << "\nSize of unsized character array is: " << sizeof chr1;
	char chr2[] = "pabitra is a very good boy";
	// size is no. of elements in the NTS(including the NULL) multiplied by the base type
	cout << "\nSize of Null-terminated String is: " << sizeof chr2 << endl;

	return 0;
}