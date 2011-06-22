#include <stdio.h>
#include <stdlib.h>

#include <map>
#include <vector>
using namespace std;

#define uint unsigned int

uint sumofdivisors(uint number)
{
	uint sum = 1;
	uint n = number;
	uint p = 2;
	uint j;

	while (p * p <= n && n > 1)
	{
		if (n % p == 0)
		{
			j = p * p;
			n = n / p;

			while (n % p == 0)
			{
				j = j * p;
				n = n / p;
			}

			sum = sum * (j - 1);
			sum = sum / (p - 1);
		}

		p = p == 2 ? 3 : p+2;
	}

	if (n > 1)
	{
		sum = sum * (n + 1);
	}

	return sum - number;
}

int main(int argc, char* argv[])
{
	uint limit = 20161;
	uint sum = 0;
	uint r;
	uint size;

	vector<uint> abundants;

	bool sums[20161] = {false};

	for (uint i = 12; i <= limit; i++)
	{
		if (sumofdivisors(i) > i)
		{
			abundants.push_back(i);
		}
	}

	size = abundants.size();
	for (uint i = 0; i < size; i++)
	{
		for (uint j = 0; j <= i; j++)
		{
			r = abundants[j] + abundants[i];

			if (r > limit)
			{
				break;
			}

			sums[r] = true;
		}
	}

	for (uint i = 1; i <= limit; i++)
	{
		if (!sums[i])
		{
			sum += i;
		}
	}

	printf("%u\n", sum);
	return 0;
}

