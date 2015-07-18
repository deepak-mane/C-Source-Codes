/*
*	If we are passing an entire structure to a function as argument then
*	that structure will be loaded in the stack memory.
*	Now, if the structure is very simple, it wont cost much overhead.
*	
*	But, when the structure contains some arrays and all, then the overhead
*	will be considerably increased and will decrease the performance.
*
*	NOTE:
*	-----
*	The best way to pass an entire structure to a function as argument is
*	using pointer to structure.
*	In this way only the addressed is stored in stack memory and results
*	in faster operation
*/

#include <iostream>
#include <sstream>

#define DELAY 128000

using namespace std;

struct struct_type
{
	int hour;
	int minute;
	int seconds;
};

void update(struct struct_type *st);
void display(struct struct_type *st);
void delay();

int main()
{
	struct struct_type s;

	// initialize the structure members to default value
	s.hour = 0;
	s.minute = 0;
	s.seconds = 0;

	for( ; ; )
	{
		update(&s);
		display(&s);		
	}

	return 0;
}

void update(struct struct_type *st)
{
	// increase the seconds count
	st->seconds++;

	// update the minute
	if(st->seconds == 60)
	{
		st->seconds = 0;
		st->minute++;
	}

	// update the hour
	if(st->minute == 60)
	{
		st->minute = 0;
		st->hour++;
	}

	// reset hour to zero on reaching 24
	if(st->hour == 24)
	{
		st->hour = 0;
	}

	delay();
}

void display(struct struct_type *st)
{
	int sec, min, hr;
	
	sec = st->seconds;
	min = st->minute;
	hr =  st->hour;

	std::stringstream ss;
	ss << "Hour :" << hr << "Min :" << min << "Sec :" << sec;

	cout << ss.str() << endl;
}

void delay()
{
	for(int t = 1; t < DELAY; t++) {}
}