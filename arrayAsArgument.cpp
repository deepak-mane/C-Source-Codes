#include <iostream>

using namespace std;

void func(int p[]);

int main()
{
	int arr[5] = {1,2,3,4,5};
	func(arr);

	return 0;
}

void func(int p[5])
{
	for(int i = 0; i < 5; i++)
		// cout << *(p + i) << endl;
		cout << p[i];
}