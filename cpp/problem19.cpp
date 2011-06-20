#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define uint unsigned int

// monday = 0
// sunday = 6

uint normal_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
uint leap_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

uint* days(uint year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return leap_days;
			}

			return normal_days;
		}

		return leap_days;
	}

	return normal_days;
}

int main(int argc, char* argv[])
{
	uint year = 1901;
	uint month;
	uint day = 1;
	uint sundays = 0;
	uint *d;

	while (year <= 2000)
	{
		d = days(year);
		month = 0;

		for (month = 0; month < 12; month++)
		{
			day += d[month];
			day %= 7;

			if (day == 6)
			{
				sundays++;
			}
		}

		year++;
	}

	printf("%u\n", sundays);
	
	return 0;
}

