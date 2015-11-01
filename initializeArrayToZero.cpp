#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int arr1[5];
	int arr2[2][5];

	// initialize 1D array elements to zero
	memset(arr1, 0, sizeof(int)*5);

	// initialize 2D array elements to zero
	memset(arr2, 0, sizeof(int)*2*5);

	// print elements of 1D array
	for(int i = 0; i < 5; i++)
		printf("\nvalue of arr1[%d] = %d", i, arr1[i]);

	cout << endl;
	cout << endl;

	// printing elements of the 2D array
	for(int j = 0; j < 2; j++)
		for(int k = 0; k < 5; k++)
			printf("\nvalue of arr2[%d][%d] = %d", j, k, arr2[j][k]);			


	return 0;
}