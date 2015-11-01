#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "Hello World";

	// using memset to add leading extra characters
	memset(str, '%', 4);

	// printing modified string
	cout << str;

	return 0;
}

// O/P = %%%%o World
// the first four characters are replaced with % sign.