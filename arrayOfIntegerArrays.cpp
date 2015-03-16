#include <iostream>

using namespace std;

void printArray(int **);

int main()
{
	int arr_1[] = {1, 2, 3, 4, 5};
	int arr_2[] = {6, 7, 8};
	int arr_3[] = {9, 10};

	int* arr[] = {arr_1, arr_2, arr_3, NULL};

	// print all the elements in array of arrays
	// printArray(arr);

	cout << sizeof arr_1;
	cout << sizeof (*arr) / sizeof (int *);
	return 0;
}

void printArray(int* *arr)
{
	// for(int i = 0; arr[i] != NULL; i++)
	// {
	// 	for(int j = 0; j < sizeof *(arr + i); j++)
	// 	{
	// 		cout << *(arr + i)[j] << "\t";
	// 	}
	// 	cout << endl;
	// }
}