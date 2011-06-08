#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <map>
using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	map<uint, uint> composites;
	map<uint, uint>::iterator i;

	uint target = 10001;
	uint count = 1;
	uint prime = 2;
	uint n = 3;
	uint p,x;

	while (count < target)
	{
		i = composites.find(n);

		if (i != composites.end())
		{
			p = i->second;
			x = n + p;

			while (composites.find(x) != composites.end())
			{
				x += p;
			}

			composites[x] = p;
		}
		else
		{
			composites[n*n] = 2*n;
			prime = n;
			count++;
		}

		n += 2;
	}

	printf("%u\n", prime);

	return 0;
}

