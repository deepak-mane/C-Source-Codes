#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int x = 1;

	label:
		cout << x;
		exit(1);

	cout << "still continuing";

	if( x == 1)
	goto label;		

	return 0;
}