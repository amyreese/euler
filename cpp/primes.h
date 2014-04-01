
#include <map>
using namespace std;

#define uint unsigned int

bool isprime(uint number)
{
	if (number < 2)
	{
		return false;
	}

	if (number < 4)
	{
		return true;
	}

	if (number % 2 == 0)
	{
		return false;
	}
	
	uint n = 3;
	uint m = number / 2 + 1;

	while (n < m)
	{
		if (number % n == 0)
		{
			return false;
		}

		n += 2;
	}

	return true;
}

bool isprime(int number)
{
    if (number < 0)
    {
        return false;
    }

    return isprime((uint) number);
}

map<uint, uint> sieve_results;
map<uint, uint> sieve_composites;

uint sieve_count = 1;
uint sieve_prime = 2;
uint sieve_n = 3;

uint sieve(uint target)
{
    if (target == 1)
    {
        return 2;
    }

    map<uint, uint>::iterator i;
	uint p,x;

	while (sieve_count < target)
	{
		i = sieve_composites.find(sieve_n);

		if (i != sieve_composites.end())
		{
			p = i->second;
			x = sieve_n + p;

			while (sieve_composites.find(x) != sieve_composites.end())
			{
				x += p;
			}

			sieve_composites[x] = p;
		}
		else
		{
			sieve_composites[sieve_n*sieve_n] = 2*sieve_n;
			sieve_prime = sieve_n;
			sieve_count++;
            sieve_results[sieve_count] = sieve_prime;
		}

		sieve_n += 2;
	}

    return sieve_results[target];
}
