#include <iostream>

using namespace std;

int main()
{
	int num = 123;

	// printing different types of min field width
	// it is similar to setfill() and setw() represting the two numbers after % sign
	printf("Normal Number : %d\n", num);


/*  will print spaces in the front if the number of digits given after
*   after the % is more than the number of digits in variable num.
*
*   If the number of digits given after % is less than the number of digits
*   present in the variable num, then the variable value will only be printed.
*/

	cout << "FLAGS >>>>>>>>>>" << endl << endl;
	/* flags - sub format specifiers */

	printf("%   d\n", num);	// giving single or multiple space between % and d will consider a single space only
	// printing an octal and hexadecimal number
	// that would be preceeded with 0, 0x and 0X respectively.
	printf("%#o\n", num);
	printf("%#x\n", num);
	printf("%#X\n", num);
	printf("%*d\n", 5, num);	// we have to specify the no. of characters to be printed for the *

	cout << "WIDTH >>>>>>>>>>" << endl << endl;
	/* width - sub-format specifier */

	// this is similar to setw()
	printf("%1d\n", num);
	printf("%2d\n", num);
	printf("%3d\n", num);
	printf("%4d\n", num);
	printf("%5d\n", num);
	printf("%6d\n", num);
	printf("%7d\n", num);
	printf("%8d\n", num);
	printf("%9d\n", num);
	printf("%10d\n", num);

	// printing different types of min field width with setfill() using 0 as filler
	printf("%01d\n", num);
	printf("%02d\n", num);
	printf("%03d\n", num);
	printf("%04d\n", num);
	printf("%05d\n", num);
	printf("%06d\n", num);
	printf("%07d\n", num);
	printf("%08d\n", num);
	printf("%09d\n", num);
	printf("%010d\n", num);

	cout << "PRECISION >>>>>>>>" << endl << endl;
	/* precision - sub-format specifier */

// NOTE:
	// .0 or . - no characters will be printed after the decimal
	// .1      - only one digit will be printed after decimal
    printf ("floats: %4.2f, %+.e, %+.2e, %+.0e, %E \n", 
    	3.1416, 3.1416, 3.1416, 3.1416, 3.1416);
    printf("%3.4f\n", 2111.397);
    
	return 0;
}