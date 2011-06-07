#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <vector>
using namespace std;

vector<unsigned int> primefactors(unsigned int number)
{
    vector<unsigned int> factors;

    if (number % 2 == 0)
    {
        factors.push_back(2);
    }
    
    unsigned int n = 3;
    unsigned int m = number / 2;

    while (n < m)
    {
        if (number % n == 0)
        {
            bool prime = true;

            for (vector<unsigned int>::iterator i = factors.begin(); i < factors.end(); i++)
            {
                if (n % *i == 0)
                {
                    prime = false;
                    break;
                }
            }

            if (prime)
            {
                factors.push_back(n);
            }
        }

        n++;
    }

    return factors;
}

int main(int argc, char* argv[])
{
    vector<unsigned int> factors = primefactors(13195);
    //vector<unsigned int> factors = primefactors(600851475143);

    printf("[");
    bool first = true;
    for (vector<unsigned int>::iterator i = factors.begin(); i < factors.end(); i++)
    {
        if (first)
        {
            printf("%d", *i);
            first = false;
        }
        else
        {
            printf(", %d", *i);
        }
    }
    printf("]\n");

	return 0;
}

