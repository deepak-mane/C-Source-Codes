#include <iostream>

using namespace std;

void printPointer(char **);
// int * is the return type and we are passing a pointer to array so int **

int main()
{
	char var1[] = "string one";
	char var2[] = "string two";
	char var3[] = "string three";

	char *arr[] = {var1, var2, var3, NULL};	
	// is not a null-terminated string, so set the last item to NULL to track the end of the array of pointers.
	printPointer(arr);

	return 0;
}

void printPointer(char **ptr)
{
	for(int i = 0; ptr[i] != NULL; i++)
	{
		for(int j = 0; (*(ptr + i))[j] ; j++)
		{
			cout << *(*(ptr + i) + j);
		}

		cout << endl;
	}
}