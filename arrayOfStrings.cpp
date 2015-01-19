#include <iostream>

#define MAX 5
#define LEN 10

using namespace std;

int main()
{
	char ch[MAX][LEN];

	for(int i = 0; i < MAX; i++)
	{
		cout << "\nPlease enter string of max length 9 : \n";
		gets(ch[i]);
	}

	// displaying strings
	for(int i = 0; i < MAX; i++)
	{
		cout << "\nDisplaying string " << i << " ";
		cout << ch[i];
	}

	return 0;
}