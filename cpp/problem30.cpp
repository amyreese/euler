#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define uint unsigned int

bool power_sum(uint number, double power)
{
    double sum = 0;
    double digit;
    char buffer[20];
    sprintf(buffer, "%d.", number);

    for (uint i = 0; i < 20; i++)
    {
        if (buffer[i] == '.') { break; }

        digit = (double) (buffer[i] - '0');
        sum += pow(digit, power);
    }

    return sum == number;
}

int main(int argc, char* argv[])
{
    uint sum = 0;

    for (uint i = 10; i < 1000000; i++)
    {
        if (power_sum(i, 5))
        {
            sum += i;
        }
    }

	printf("%d\n", sum);
	return 0;
}

