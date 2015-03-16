#include <iostream>

using namespace std;

int factorial(int);

int main()
{
	int num, answer;

	cout << "Please enter a number : ";
	cin >> num;

	answer = factorial(num);

	cout << "\nThe Factorial of " << num << " is " << answer;

	return 0;
}

int factorial(int n)
{
	// terminating condition is a must to terminate recursion
	if(n == 1 || n == 0)
		return 1;

	// calculating the factorial of n
	int value = n * factorial(n-1);
	return value;
}