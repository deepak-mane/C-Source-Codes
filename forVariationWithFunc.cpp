#include<iostream>

using namespace std;

int readNum();
void sqrNum(int n);
void msg();

int main()
{
	int num;
	for(msg(); num = readNum(); msg())
	{
		sqrNum(num);
	}

	return 0;
}

void msg()
{
	cout << "Please enter a number\n";
}

int readNum()
{
	int num;
	cin >> num;

	return num;
}

void sqrNum( int n)
{
	printf("square of %d is %d\n", n, n*n);
}
