#include <iostream>

using namespace std;

#define ROW 5
#define COL 10

int val = 0;

int arr[ROW][COL];

int main()
{
	// fill the array with numbers, make a 5 x 10 array
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			arr[i][j] = ++val;
		}
	}

	// printing arrays
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

/*
	FORMULA -
	*( (int *)arr + i * no.of columns + j);
*/
	cout << *((int *)arr) << endl;
	cout << *((int *)arr + 1) << endl;
	cout << *((int *)arr + 2 * COL + 4);

	return 0;
}