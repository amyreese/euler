#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int smallestmultiple(unsigned int range)
{
	unsigned int number = 1;
	bool divides;

	while (true)
	{
		divides = true;

		for (unsigned int i = 1; i <= range; i++)
		{
			if (number % i > 0)
			{
				divides = false;
			}
		}

		if (divides)
		{
			return number;
		}

		number++;
	}
}

int main(int argc, char* argv[])
{
	unsigned int number = smallestmultiple(20);
	printf("%u\n", number);

	return 0;
}

