#include <iostream>

using namespace std;

int main()
{
	int *p;	// compiler assumes that the pointer will point to an integer variable
			// or the pointer will save the address of an integer variable.
	double var = 1, *dp, y;
	dp = &var;
	cout << &var << endl << *dp << endl;

	p = (int *)&var;	// integer pointer points to a double variable
	// a pointer can point to any type, but it doesn't give accurate results.

	cout << &p << endl;
	cout << *p;
	// y = *dp;
	// cout << y;

	return 0;
}