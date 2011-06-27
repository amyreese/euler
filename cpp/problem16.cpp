#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "bignum.h"

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint i = 1;
	uint total = 0;
	Bignum result(2);

	while (i++ < 1000)
	{
		result *= 2;
	}

	uint length = result.length() + 1;
	char* buffer = new char[length];

	length = result.str(buffer, length) - 1;
	for (i = 0; i < length; i++)
	{
		total += buffer[i] - '0';
	}

	printf("%u\n", total);

	delete buffer;
	return 0;
}

