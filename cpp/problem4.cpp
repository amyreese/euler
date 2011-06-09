#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	vector<int> results;

	for (int i = 999; i > 900; i--)
	{
		for (int j = 999; j > 900; j--)
		{
			results.push_back(i * j);
		}
	}

	char buffer[16];
	int length;
	int m;
	bool match;

	for (vector<int>::iterator i = results.begin(); i != results.end(); i++)
	{
		match = true;
		length = sprintf(buffer, "%u", *i);
		m = length / 2;

		for (int k = 0; k < m; k++)
		{
			if (buffer[k] != buffer[length-k-1])
			{
				match = false;
			}
		}

		if (match)
		{
			printf("%u\n", *i);
			break;
		}
	}

	return 0;
}

