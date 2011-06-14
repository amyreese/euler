#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint n = 2;
	uint triangle = 1;
	uint factor;
	uint count;

	do
	{
		triangle += n++;
		count = 2;

		for (factor = triangle / 2; factor > 1; factor--)
		{
			if (triangle % factor == 0)
			{
				count++;
			}
		}
	}
	while (count <= 500);

	printf("%u\n", triangle);

	return 0;
}

