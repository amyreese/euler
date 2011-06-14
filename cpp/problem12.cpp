#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint n = 2;
	uint triangle = 1;
	uint root;
	uint factor;
	uint count;

	do
	{
		triangle += n++;
		count = 2;

		root = floor(sqrt(triangle));
		if (root * root == triangle)
		{
			count++;
		}

		for (factor = 2; factor < root; factor++)
		{
			if (triangle % factor == 0)
			{
				count += 2;
			}
		}
	}
	while (count <= 500);

	printf("%u\n", triangle);

	return 0;
}

