#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isprime(unsigned int number)
{
	unsigned int n = 3;
	unsigned int m = number / 2 + 1;

	if (number % 2 == 0)
	{
		return false;
	}
	
	while (n < m)
	{
		if (number % n == 0)
		{
			return false;
		}

		n += 2;
	}

	return true;
}

unsigned int smallestmultiple(unsigned int range)
{
	unsigned int result = 1;

	for (unsigned int i = 2; i <= range; i++)
	{
		if (isprime(i))
		{
			result *= i;
		}
	}

	bool divides = false;
	unsigned int remainder, factor;

	while (!divides)
	{
		divides = true;

		for (unsigned int i = range; i > 1; i--)
		{
			remainder = result % i;

			if (remainder > 0)
			{
				divides = false;
				factor = (float)i / (float)remainder;
				result *= factor;
			}
		}
	}

	return result;
}

int main(int argc, char* argv[])
{
	unsigned int number = smallestmultiple(20);
	printf("%u\n", number);

	return 0;
}

