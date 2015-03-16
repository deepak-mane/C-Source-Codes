#include <iostream>

using namespace std;

int func();

int main()
{
	char value = func();
	cout << "-----------------" << endl << value << endl;

	int n_char_print = printf("Hello World\n");
	cout << endl << "No. of characters printed by printf is: " << n_char_print;

	return 0;
}

int func()
{
	// no return statement return 1 for int and char.
}