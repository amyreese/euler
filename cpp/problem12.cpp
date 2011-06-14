#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <map>
using namespace std;

#define uint unsigned int

map<uint, uint> primefactors(unsigned long number)
{
	uint remaining = number;
    map<uint, uint> factors;

    uint n = 2;

    while (n <= remaining)
    {
        while (remaining % n == 0)
        {
			if (factors.find(n) != factors.end())
			{
				factors[n] += 1;
			}
			else
			{
				factors[n] = 1;
			}
			remaining = remaining / n;
        }

		n += n > 2 ? 2 : 1;
    }

    return factors;
}
int main(int argc, char* argv[])
{
	uint n = 2;
	uint triangle = 1;
	uint count;
	map<uint, uint> factors;
	map<uint, uint>::iterator i;

	do
	{
		triangle += n++;
		count = 1;

		factors = primefactors(triangle);

		for (i = factors.begin(); i != factors.end(); i++)
		{
			count *= i->second + 1;
		}
	}
	while (count <= 500);

	printf("%u\n", triangle);

	return 0;
}

