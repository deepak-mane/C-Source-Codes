#include<iostream>
#include<cstring>

using namespace std;

void converge(char[], char[]);

int main()
{
	char target[20] = "xxxxxxxxxxxx";
	char src[20] = "I am Pabitra";

	converge(target, src);

	return 0;
}

void converge(char target[], char src[])
{
	printf("%s\n", target);

	int i,j;
	for(i = 0, j = strlen(src); i <= j; i++, j--)
	{
		target[i] = src[i];
		target[j] = src[j];

		// cout << target;
		printf("%s\n", target);
	}
}