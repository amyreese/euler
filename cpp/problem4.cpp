#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <vector>
using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
    uint top    = 999;
    uint bottom = 900;

	char buffer[16];
	uint biggest = 0;
	uint result;
	uint length;
	uint m;
	bool match;
	bool run = true;

	for (uint i = top; i > bottom && run; i--)
	{
		for (uint j = top; j >= i; j--)
		{
			result = i * j;
            if (result <= biggest)
            {
                continue;
            }

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

