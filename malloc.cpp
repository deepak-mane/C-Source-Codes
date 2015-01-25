#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int *p;

	p = (int *) malloc(10);
	if(!p)
		cout << "Out of memory! sorry";
	else
	{
		cout << "Memory allocated" << " address is: " << p << " value at address is: " << *p;
	}

	return 0;
}