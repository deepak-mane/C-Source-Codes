#include <iostream>

using namespace std;

enum enum_type
{
	one,
	two, 
	three = 100,
	four
};

int main()
{
	// printing enum values
	// cout << one << endl;
	// cout << three << endl;
	// cout << four;

	int value = one;
	switch(value)
	{
		case one:
			cout << "printing one" << endl;
			// break;
		case two:
			cout << "printing two" << endl;
			// break;
		case three:
			cout << "printing three" << endl;
			// break;
		case four:
			cout << "printing four" << endl;
			break;
		default:
			cout << "value is not available";
			break;
	}

	return 0;
}