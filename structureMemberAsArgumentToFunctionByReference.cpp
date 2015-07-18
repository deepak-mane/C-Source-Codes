#include <iostream>

using namespace std;

struct struct_type
{
	int x;
};

void func(int *arg);

int main()
{
	struct struct_type arg;
	arg.x = 1000;

	// passing structure member through reference
	func(&arg.x);

	return 0;
}

void func(int *parm)
{
	cout << *parm;
}