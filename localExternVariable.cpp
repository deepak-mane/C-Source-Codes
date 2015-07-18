// local extern
#include<iostream>

using namespace std;

// // declaring the extern variable
// extern int var;

void initializeExtern();

int main()
{
	// declaring the extern variable
	extern int var;

	printf("%d\n", var);

	// defining the extern variable
	// var = 100;
	// initializeExtern();
	return 0;
}

// int var = 100;
int var;

void initializeExtern()
{
	var = 100;
}
