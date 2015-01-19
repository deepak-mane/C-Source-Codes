#include <iostream>

using namespace std;

int main()
{
	int array[10];

	for(int i = 10; i > 0; i--)
	{
		array[i] = i;
	}

	for(int j = 15; j > 0; j--)
		cout << endl << array[j];

	return 0;
}