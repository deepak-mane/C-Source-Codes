#include <iostream>
#include <cstdlib>

#define CLASS 3
#define STUDENTS 3

using namespace std;


void enterMarks();
int readMarks(int );
void displayMarks(int ch[CLASS][STUDENTS]);

int marks[CLASS][STUDENTS];

int main()
{
	char ch;
	char str[10];

	for( ; ; )
	{
		do
		{
			cout << "\n(E)nter Marks";
			cout << "\n(R)ead Marks";
			cout << "\n(Q)uit";

			cout << "\nPlease select an option\n";
			gets(str);
			ch = *str;
		}
		while( (ch != 'E' && ch != 'R' && ch != 'Q') );

		switch(ch)
		{
			case 'E':
				enterMarks();
				break;
			case 'R':
				displayMarks(marks);
				break;
			case 'Q':
				exit(0);
		}
	}
	return 0;
}

void enterMarks()
{
	for(int i = 0; i < CLASS; i++)
	{
		cout << "Enter Marks for class " << i + 1 <<endl;
		for(int j = 0; j < STUDENTS; j++)
		{
			marks[i][j] = readMarks(j);
		}
	}
}

int readMarks(int num)
{
	char gd[10], p;
	cout << "\nPlease enter the marks of student " << num +1 << endl;
	gets(gd);
	p = *gd;

	return atoi(gd); // atoi() - ascii to integer
}

void displayMarks(int ch[CLASS][STUDENTS])
{
	for(int i = 0; i < CLASS; i++)
	{
		cout << "\nDisplaying Marks of Class " << i + 1 << endl;
		for(int j = 0; j < STUDENTS; j++)
		{
			cout << "\nMark of student" << j + 1<< "is" << marks[i][j];
		}
	}
}