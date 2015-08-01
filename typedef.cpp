#include <iostream>

using namespace std;

// declaring typedef
typedef int number;
typedef number num;

int main()
{
	number x = 100;
	num y = 10;
	// printing typedef int
	cout << x << endl << y;

	return 0;
}