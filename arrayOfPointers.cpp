#include <iostream>

using namespace std;

void printPointer(int **);
// int * is the return type and we are passing a pointer to array so int **

int main()
{
	int var1 = 20; 
	int var2 = 30; 
	int var3 = 40;
	int *p, *q, *r;

	p = &var1;
	q = &var2;
	r = &var3;

	int *arr[] = {p, q, r};
	// same as passing array to functions
	printPointer(arr);

	return 0;
}

void printPointer(int **ptr)
{
	for(int i = 0; i < 3; i++)
		/* ptr contains the adress of the array 
			now ptr + 1 is the address of the second element in the array
			which is a pointer variable, to get the value of the pointer
			variable we wrote -  
			**(ptr + i) i.e. value at address contained by pointer,
			which is an element of the array accessed by the address using pointer*/
			

		cout << **(ptr + i) << endl;
}