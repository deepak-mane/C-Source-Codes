#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	cout << arr << endl;

	char chr[] = {'a','b', NULL};
	// chr in cout will print all the elements in the character array
	cout << chr << " and size of chr is: " << sizeof chr << endl;

	char ch[] = "pabitra";
	// ch in cout prints the entire string
	cout << ch << endl;
	
	const char *str = "pabitra";
	// str in cout will print the entire string
	cout << str;

	return 0;
}