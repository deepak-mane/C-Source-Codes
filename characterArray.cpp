#include <iostream>

using namespace std;

int main()
{
	char ch[5];

	for(int i = 0; i < 5; i++)
		cin >> ch[i];

	for(int i = 0; ch[i] != NULL; i++)
		cout << ch[i] << endl;

	return 0;
}