#include <stdio.h>
#include <stdlib.h>

#include "discrete.h"

int main(int argc, char* argv[])
{
	ulong moves = combinations(40,20);
	printf("%llu\n", moves);
	return 0;
}

