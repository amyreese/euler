#include <stdio.h>
#include <stdlib.h>

#include <list>
#include <string>
using namespace std;

#include "discrete.h"

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint limit = 999999;
	uint total = 0;

	char digit;
	string result;
	list<char> digits;
	list<char>::iterator iter;

	for (digit = '0'; digit <= '9'; digit++)
	{
		digits.push_back(digit);
	}

	uint f, q, i;
	int p;

	for (p = 9; p >= 0; p--)
	{
		f = factorial(p);

		q = 0;
		while (total + (q+1) * f <= limit)
		{
			q++;
		}

		total += q * f;

		iter = digits.begin();
		for (i = 0; i < q; i++)
		{
			iter++;
		}

		digit = *iter;
		digits.remove(digit);

		result += digit;
	}

	printf("%s\n", result.data());
	return 0;
}

