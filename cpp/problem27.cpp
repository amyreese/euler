#include <stdio.h>
#include <stdlib.h>

#include "primes.h"

using namespace std;

#define uint unsigned int

int amax = 1000;
int bmax = 1000;

int consecutive_primes(int a, int b)
{
    int n = 0;
    int result = 0;

    while(true)
    {
        result = (n * n) + (a * n) + b;

        if (!isprime(result))
        {
            return n;
        }

        n++;
    }
}

int main(int argc, char* argv[])
{
    int largest_n = 0;
    int largest_a = 0;
    int largest_b = 0;
    int n = 0;

    for (int a = amax * -1; a <= amax; a++)
    {
        for (int b = bmax * -1; b <= bmax; b++)
        {
            n = consecutive_primes(a, b);

            if (n > largest_n)
            {
                largest_n = n;
                largest_a = a;
                largest_b = b;
            }
        }
    }

	printf("a = %d, b = %d, n = %d\n", largest_a, largest_b, largest_n);
	return 0;
}

