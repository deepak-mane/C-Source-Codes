#include <iostream>

using namespace std;

// int arr[] = {1,2,3,4,5};

struct struct_type1
{
	int x;
};

struct struct_type2
{
	struct struct_type1 st;
	int arr[3] = {1,2,3};
};

int main()
{
	struct struct_type2 st2;
	st2.st.x = 100;

	// accessing compound structure members
	cout << st2.arr[2] << endl;
	cout << st2.st.x;

	return 0;
}