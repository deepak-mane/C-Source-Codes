#include <iostream>

struct struct_type
{
	int x;
};

void func(int x);

using namespace std;

int main()
{
	struct struct_type arg;

	arg.x = 1000;
	func(arg.x);

	return 0;	
}

void func(int x)
{
	cout << x;
}