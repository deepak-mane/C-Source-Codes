#include <iostream>
#include <cstdlib>

#define SIZE 5

void push(int );
int pop();
void showStack(int *);	// using pointer declaration

using namespace std;

int stack[SIZE], *tos, *p, val;
	
int main()
{
	tos = stack;
	p = stack;

	 do
	 {
	 	cout << "please enter a value to stack : ";
	 	cin >> val;

	 	if(val == -1)
	 		continue;
	 	else
	 	{
		 	if(val != 0)
		 	{
		 		push(val);
		 		showStack(stack);
		 	}
		 	else
		 	{
			 	cout << pop() << " removed from the stack\n";
				showStack(stack);	 		
		 	}	 		
	 	}

	 }
	 while(val != -1);

	 return 0;
}

void push(int i)
{
	// check for overflow condition
	if(tos == (p + SIZE))
	{
		cout << "overflow condition encountered\n";
		showStack(stack);
		return;
	}
	*tos = i;
	tos++;
}

int pop()
{
	// check for underflow condition
	if(tos == p)
	{
		cout << "Underflow condition encountered\n";
		showStack(stack);
		exit(1);
	}

	tos--;
	return *tos;
}

void showStack(int *st)
{
	cout << "\nStack is now :\n";
	// pointer subtraction to get the no. of objects in between (tos - p)
	for(int i = (tos - p); i > 0; i--)	 			
	{
		cout << *(stack + i -1) << endl;
	}
}