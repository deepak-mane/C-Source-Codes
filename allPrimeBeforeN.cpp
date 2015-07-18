#include <iostream>

using namespace std;

int main()
{
	int num, count = 0;

	cout << "please give any integer number\n";
	cin >> num;


	// logic for prime number
	for(int i = 2; i < num; i++)
	{
		/** take the inner loop from 1 to the number
		* as the number should be divisible by 1 or by itself to be a prime
		* number, so take a count variable, if count is greater than 2, then
		* it is surely not a prime number.
		*/

		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
				++count;
		}

		// check the count value for prime condition
		if(count == 2)
		{
			cout << i <<  " is a prime number\n";
		}

		// reset the counter to 0
		count = 0;
	}

	return 0;
}