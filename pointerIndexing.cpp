#include <iostream>

#define ROW 3
#define COL 3

using namespace std;

int main()
{
	int oneD[10];

	for(int i = 0; i < 10; i++)
	{
		oneD[i] = i;
	}

	cout << *oneD << endl;
	cout << *(oneD + 2);

	/*	NOTE -----------------------------------------------------------------------------
		To find an element in a 1D array we can directly use the array name + no. of steps
		to get the address of that element
		i.e;	*(a + 2)
				will print the third element int the array 

		But in a 2D or multi-dimentional array we cannot directly use the array name + no. of steps
		to get the address of that element
		i.e;	*(a + (i*row_lenght + j)	 is not going to give the value

		Here, we need to convert the (pointer to array) to a (pointer) of the base type
		to make the pointer arithematic work
		so *((int *)a + (i*row_length + j))	this will give the value at the address
		*/

	int arr[ROW][COL];

	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			arr[i][j] = i + j;
		}
	}

	int *pointer;

	pointer = (int *)arr;

	// reading value using pointer arithematic
	/*	To use pointer arithematic, we need to convert 
		n-dimentional array to pointer into 1-dimentional array to pointer*/
	cout << "getting value for arr[2][2]\n";
	// cout << (int)arr; // contains the address of the first element i.e; arr[0][0]
	cout << *pointer << endl;
	cout << *(pointer + 2) << endl;
	cout << *( (int *)arr + 2*ROW + 2) << endl;
	// alternate notation
	cout << *((int *) &arr[2] + 2);

	return 0;
}