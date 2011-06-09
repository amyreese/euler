#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "primes.h"

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

