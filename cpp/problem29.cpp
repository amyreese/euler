#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unordered_set>

using namespace std;

#define uint unsigned int
#define dset unordered_set<double>

dset powers(double n)
{
    double value, a, b;
    dset result;

    for (a = 2; a <= n; a++)
    {
        for (b = 2; b <= n; b++)
        {
            value = pow((double) a, (double) b);
            result.insert(value);
        }
    }

    return result;
}

int main(int argc, char* argv[])
{
    double n = 100;
    dset result = powers(n);

	printf("%d\n", (uint) result.size());
	return 0;
}

