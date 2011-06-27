#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "bignum.h"

#define uint unsigned int

int main(int argc, char* argv[])
{
	Bignum p = 1;
	Bignum q = 1;
	Bignum t;
	uint i = 2;
	uint length;
	uint limit = 1000;
	char buffer[1200];

	while (true)
	{
		t = p + q;
		p = q;
		q = t;
		
		i++;

		length = t.str(buffer, 1200) - 1;
		
		if (length >= limit)
		{
			printf("%u", i);
			break;
		}

	}

	printf("\n");
	return 0;
}

