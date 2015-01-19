#include <iostream>

using namespace std;

int main()
{
	int var, *p, **ptp;

	var = 100;
	p = &var;
	ptp = &p;

	cout << **ptp;

	return 0;
}