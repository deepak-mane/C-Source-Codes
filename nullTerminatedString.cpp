#include <iostream>

using namespace std;

int main()
{
	char ch[6] = "papun";

	for(int i = 0; ch[i]!= NULL; i++)
		cout << *(ch + i) << endl;

	return 0;
}