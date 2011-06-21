#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <list>
using namespace std;

#define uint unsigned int

bool strcmp(char* a, char* b)
{
	while(*a == *b)
	{
		a++; b++;
	}

	return *a < *b;
}

int main(int argc, char* argv[])
{
	char buffer[50000];

	FILE* in = fopen("input/names.txt", "r");

	if (in == NULL)
	{
		printf("File open failed");
		return 1;
	}

	char* namestr = fgets(buffer, 50000, in);

	if (namestr == NULL)
	{
		printf("File read failed");
		return 1;
	}

	list<char*> names;
	list<char*>::iterator iter;
	char* name;
	bool inname = false;

	for (uint i = 0; namestr[i] != 0; i++)
	{
		if (inname)
		{
			if (namestr[i] == '"')
			{
				namestr[i++] = 0;
				inname = false;

				names.push_back(name);
			}
		}
		else
		{
			if (namestr[i] == '"')
			{
				name = namestr + i + 1;
				inname = true;
			}
		}
	}

	names.sort(strcmp);

	uint a = 'A' - 1;
	uint pos = 1;
	uint score;
	uint total = 0;

	for (iter = names.begin(); iter != names.end(); iter++)
	{
		score = 0;
		name = *iter;

		for (uint i = 0; name[i] != 0; i++)
		{
			score += name[i] - a;
		}

		score *= pos++;
		total += score;
	}

	printf("%u\n", total);
	return 0;
}

