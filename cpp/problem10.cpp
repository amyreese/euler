#include <stdio.h>
#include <stdlib.h>

#include "primes.h"

#define lint unsigned long long int

int main(int argc, char* argv[])
{
	lint result = 0;
	uint n = 1;
	uint prime;

	while (true)
	{
		prime = sieve(n);

		if (prime > 2000000)
		{
			break;
		}

		result += prime;
		n++;
	}

	printf("%llu, %u\n", result, prime);

	return 0;
}

