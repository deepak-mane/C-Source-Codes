#include <iostream>

using namespace std;

struct struct_type
{
	int x;
};

void func(struct struct_type *st);

int main()
{
	struct struct_type st;
	st.x = 100;

	// passing structure to function by reference
	func(&st);

	return 0;
}

void func(struct struct_type *st)
{
	cout << st->x;
}