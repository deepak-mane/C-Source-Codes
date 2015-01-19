#include <iostream>
#include <cstring>

using namespace std;

int cmp(const char *, const char *);
void compare(const char *, const char*, int (*ptr)(const char *, const char *));
int main()
{
	const char *ch1 = "pabitra";
	const char *ch2 = "pabitra";

	compare(ch1, ch2, cmp);

	return 0;
}

void compare(const char *a, const char *b, int (*ptr)(const char *, const char *))
{
	if(!(*ptr)(a,b))
 // can also write (*ptr) as ptr, but it will create confusion
 // between function call and pointer to functions		
		cout << "Equal";
	else
		cout << "Unequal";
}

int cmp(const char *a, const char *b) 
{
	return strcmp(a,b);
}