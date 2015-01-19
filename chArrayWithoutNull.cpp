#include <iostream>

using namespace std;

int main()
{
	char arr[5];
	int j = 1;

	for(int i = 1; i <= 5; i++)
		arr[i] = i;

	cout << "You have entered 5 elements to the array whose size is 5\n";

	cout << "\nReading the array elements";
	while(arr[j] != NULL)
	{
		cout << arr[j] << endl;
		j++;
	}
	cout << "\nNull encountered at index : " << j;

	return 0;
}