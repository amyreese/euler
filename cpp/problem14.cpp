#include <stdio.h>
#include <stdlib.h>

#include <map>
using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	map<uint, uint> history;
	map<uint, uint>::iterator h;

	uint longest = 0;
	uint longest_seed = 0;
	uint seed = 999999;
	uint limit = 1;
	uint n;
	uint count;

	while (seed > limit)
	{
		n = seed;
		count = 1;

		while (n > 1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{
				n = 3 * n + 1;
			}

			h = history.find(n);
			if (h != history.end() and h->second > count)
			{
				break;
			}
			else
			{
				history[n] = count;
			}

			count++;
		}

		if (count > longest)
		{
			longest = count;
			longest_seed = seed;
		}

		seed -= 2;
	}

	printf("%u %u\n", longest_seed, longest);
	
	return 0;
}

