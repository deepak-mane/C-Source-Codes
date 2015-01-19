#include<iostream>

using namespace std;

int func();

int main()
{
	char value = func();
	cout << "-----------------" << endl << value << endl;

	return 0;
}

int func()
{
	// no return statement return 1 for int and char.
}