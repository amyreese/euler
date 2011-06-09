
#define uint unsigned int

bool isprime(uint number)
{
	if (number < 2)
	{
		return false;
	}

	if (number < 4)
	{
		return true;
	}

	if (number % 2 == 0)
	{
		return false;
	}
	
	uint n = 3;
	uint m = number / 2 + 1;

	while (n < m)
	{
		if (number % n == 0)
		{
			return false;
		}

		n += 2;
	}

	return true;
}

