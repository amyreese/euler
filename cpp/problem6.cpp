#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint k = 100;

	uint squares = 0;
	for (uint i = 1; i <= k; i++)
	{
		squares += i * i;
	}

	uint sums = 0;
	for (uint i = 1; i <= k; i++)
	{
		sums += i;
	}
	sums *= sums;

	printf("%u\n", sums - squares);

	return 0;
}

