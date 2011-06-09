#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <vector>
using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	char buffer[16];
	uint biggest = 0;
	uint result;
	uint length;
	uint m;
	bool match;
	bool run = true;

	for (uint i = 999; i > 900 && run; i--)
	{
		for (uint j = 999; j >= i; j--)
		{
			result = i * j;

			match = true;
			length = sprintf(buffer, "%u", result);
			m = length / 2;

			for (uint k = 0; k < m; k++)
			{
				if (buffer[k] != buffer[length-k-1])
				{
					match = false;
				}
			}

			if (match)
			{
				if (result > biggest)
				{
					biggest = result;
				}
			}
		}
	}

	printf("%u\n", biggest);

	return 0;
}

