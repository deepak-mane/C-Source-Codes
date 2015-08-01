#include <iostream>

using namespace std;

int main()
{
	// precision specifier for different data types

	// INTEGERS
	printf("%3.5d\n", 1000);
	printf("%3.5d\n", (int)100000.21);

// NOTE - 
	// printf directly cannot typecast a float or double value into integer
	// we need to explicitly typecast it.
	// format specifier and format modifiers just formats the output
	// they do not typecast anything.
	printf("%d\n", 1000.23);
	printf("%d\n", 2.3);

// NOTE - when we are using the format specifier as %d then
	// if we are specifying 3.5 then it will print 5 digits.
	// Now, if the number is smaller than that then there is two cases :

	// if format modifier contains a . precision - 
	// then if the number is smaller than the number after decimal
	// it is filled with 0 preceeding the number

	// if format modifier do not contains a . precison - 
	// then 5 digits will be printed with blank spaces preceeding the
	// spaces required to fill

	// FLOAT AND DOUBLE
	printf("%03.0f\n", 10.4432);

	// STRING
	printf("%10.15s\n", "Hello my name is Pabitra, I bet you know who I am");



	return 0;
}