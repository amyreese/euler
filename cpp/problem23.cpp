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

	vector<uint> abundants;
	vector<uint>::iterator aiter, biter, aend;

	map<uint,bool> sums;
	map<uint,bool>::iterator send;

	for (uint i = 12; i <= limit; i++)
	{
		if (sumofdivisors(i) > i)
		{
			abundants.push_back(i);
		}
	}

	aend = abundants.end();
	for (aiter = abundants.begin(); aiter != aend; aiter++)
	{
		for (biter = aiter; biter != aend; biter++)
		{
			r = *aiter + *biter;

			if (r > limit)
			{
				break;
			}

			sums[r] = true;
		}
	}

	send = sums.end();
	for (uint i = 1; i <= limit; i++)
	{
		if (sums.find(i) == send)
		{
			sum += i;
		}
	}

	printf("%u\n", sum);
	return 0;
}

