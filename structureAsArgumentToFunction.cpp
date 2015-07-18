#include <iostream>

using namespace std;

/*
*	If we are passing structure as argument to a function, then that structure
*	must be declared as global.
*	Otherwise the functions wont be able to recognize the type of data they are receiving.
*	
*	Also the argument and parameter type of structure should be same, or else it wont work.
*/

struct struct_type
{
	int x;
};

void func(struct struct_type arg);

int main()
{
	struct struct_type arg;
	arg.x = 1000;

	func(arg);

	return 0;
}

void func(struct struct_type parm)
{
	cout << parm.x;
}