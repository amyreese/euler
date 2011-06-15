#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define uint unsigned int

uint moves(uint size=0, uint depth=0, uint right=0, uint down=0)
{
	if (depth >= size*2)
	{
		return 1;
	}

	uint count = 0;

	if (right < size)
	{
		count += moves(size, depth+1, right+1, down);
	}

	if (down < size)
	{
		count += moves(size, depth+1, right, down+1);
	}

	return count;
}

int main(int argc, char* argv[])
{
	uint count = moves(20);
	printf("%u\n", count);
	return 0;
}

