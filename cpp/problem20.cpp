#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "bignum.h"

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint i;
	Bignum result(1);
	uint total = 0;

	for (i = 100; i > 0; i--)
	{
		result *= i;
	}

	uint length = result.length()+1;
	char* buffer = new char[length];

	length = result.str(buffer, length) - 1;

	for (i = 0; i < length; i++)
	{
		total += buffer[i] - '0';
	}

	printf("%u\n", total);
	return 0;
}

