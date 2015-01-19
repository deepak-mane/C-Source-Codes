#include<iostream>

using namespace std;

void trim_front(char *);

int main()
{
	char str[20] = "     pabitra";

	trim_front(str);
}

void trim_front(char * str)
{
	for( ; *str ==  " " ; str++);
		cout << str;
}