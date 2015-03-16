#include <iostream>

using namespace std;

/*
	argc is the argument counter, which is minimum one because it contains the 
	name of the program
	whereas argv is the argument vector and it is a 
	pointer to array of character pointers
	*/
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		cout << "Name of the program is " << *argv;
		cout << "\nThe command line argument is " << *(argv + 1);
		/*	
			if ptr is a pointer to array of characters then 
			*ptr will print the entire string, whereas
			**ptr will print the first character of the string*/
		cout << "\nFirst character of the command line argument is " << **(argv + 1);
	}

	if(argc > 2)
		cout << "\nToo many arguments";

	return 0;
}