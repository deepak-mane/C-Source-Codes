

using namespace std;

int main()
{
	int var, *p, *q;
	char ch, *s, *t;

	p = &var;
	q = p + 5;

	s = &ch;
	t = s + 5;

	cout << "\nDifference of integer pointers is " << q - p << " objects.\n";
	cout << "\nDifference of character pointers is " << s - t << " objects.\n";

	// subtraction of pointers is only possible between same base types.
	// therefore the below statement is not valid and will generate an error.
	// cout << "\nDifference between int and char pointer is: " << p - s;

	return 0;
}