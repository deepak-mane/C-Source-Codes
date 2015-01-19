#include <iostream>

using namespace std;

int main()
{
	// sub-aggregate grouping of array elements in a multi-dimentional array
	int arr[][2] = { {0,0}, {1}, {2,4}, {3,9}, {4,16} }; // left-out elements are set to zero.

	for(int i = 0; i < sizeof arr / (sizeof (int) * 2); i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << endl;
		}
	}
	return 0;
}