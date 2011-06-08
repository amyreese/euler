#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <set>
using namespace std;

set<unsigned long> primefactors(unsigned long number)
{
	unsigned long remaining = number;
    set<unsigned long> factors;

    unsigned long n = 2;

    while (n <= remaining)
    {
        while (remaining % n == 0)
        {
			factors.insert(n);
			remaining = remaining / n;
        }

		n = n > 2 ? n + 2 : n + 1;
    }

    return factors;
}

int main(int argc, char* argv[])
{
    //set<unsigned long> factors = primefactors(13195);
    set<unsigned long> factors = primefactors(600851475143);

    printf("[");
    bool first = true;
    for (set<unsigned long>::iterator i = factors.begin(); i != factors.end(); i++)
    {
        if (first)
        {
            printf("%lu", *i);
            first = false;
        }
        else
        {
            printf(", %lu", *i);
        }
    }
    printf("]\n");

	return 0;
}

