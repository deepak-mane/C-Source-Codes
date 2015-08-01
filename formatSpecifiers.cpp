#include <iostream>

using namespace std;

int main()
{
	// variable declaration
	int x = 100;
	char ch = 'A';
	float f = 1.0f;
	double d = 1.0;

	// printing integers/decimals
	printf("integer x is %d\n", x);
	printf("integer x ix %i\n\n", x);

	// printing characters
	printf("character ch is %c\n\n", ch);

	// printing float
	printf("float f is %f\n\n", f);

	// printing double
	printf("double d is %g\n", d);
	printf("double d is %G\n", d);
	printf("double d is %e\n", d);
	printf("double d is %E\n\n", d);

	// printing address
	printf("address of x is %p\n\n", &x);

	// printing octal and hexadecimal
	for(unsigned i = 0; i < 255; i++)
	{
		printf("%o\n", i);
		printf("%x\n\n", i);
	}

	int v;
	// printing special %n format specifier
	printf("Hello %nWorld\n", &v);	// stores the number of characters before %n in signed int variable
	printf("%d\n", v);	//prints the number of characters printed before %n

	return 0;
}