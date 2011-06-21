#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <map>
#include <vector>
using namespace std;

#define uint unsigned int

vector<uint> factors(uint number)
{
	vector<uint> divisors;
	divisors.push_back(1);

	uint root = floor(sqrt(number));
	if (root * root == number)
	{
		divisors.push_back(root);
	}

	for (uint n = 2; n < root; n++)
	{
		if (number % n == 0)
		{
			divisors.push_back(n);
			divisors.push_back(number / n);
		}
	}

	return divisors;
}

uint sum(map<uint,bool> values)
{
	uint result = 0;
	for (map<uint,bool>::iterator i = values.begin(); i != values.end(); i++)
	{
		result += i->first;
	}
	return result;
}
uint sum(vector<uint> values)
{
	uint result = 0;
	for (vector<uint>::iterator i = values.begin(); i != values.end(); i++)
	{
		result += *i;
	}
	return result;
}

int main(int argc, char* argv[])
{
	map<uint, bool> numbers;
	vector<uint> divisors;
	vector<uint>::iterator iter;

	uint limit = 10000;
	uint a, b, db;

	for (a = 4; a < limit; a++)
	{
		if (numbers.find(a) != numbers.end())
		{
			continue;
		}

		b = sum(factors(a));

		if (a == b)
		{
			continue;
		}

		db = sum(factors(b));

		if (a == db)
		{
			numbers[a] = true;
			numbers[b] = true;
		}
	}

	printf("%u\n", sum(numbers));

	return 0;
}

