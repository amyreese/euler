#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int sum = 0;

	int last = 0;
	int current = 1;
	
	while (1)
	{
        int n = current + last;
        last = current;
        current = n;

        if (current > 4000000)
        {
            break;
        }

		if (current % 2 == 0)
		{
			sum += current;
		}
	}

	printf("%d\n", sum);

	return 0;
}

