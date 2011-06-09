#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	bool found = false;
	uint a = 100;
	uint b = 0, c = 0;

	while (!found && a < 333)
	{
		b = a + 1;

		while (!found && b < 500)
		{
			c = 1000 - b - a;

			if (a*a + b*b == c*c)
			{
				found = true;
				printf("%u, %u, %u, %u\n", a, b, c, a*b*c);
			}

			b++;
		}

		a++;
	}

	return 0;
}

