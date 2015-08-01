#include <iostream>

using namespace std;

int main()
{
	// by default it is left justification when we are printing something
	printf("%8d\n", 100);
	printf("%-8d\n", 100);

	return 0;
}