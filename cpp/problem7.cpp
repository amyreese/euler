#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "primes.h"

int main(int argc, char* argv[])
{
	uint prime;
	
	prime = sieve(10001);
	printf("%u\n", prime);

	return 0;
}

