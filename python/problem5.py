
from primes import *

def smallestmultiple(numbers):
    numbers = sorted(numbers, reverse=True)
    primes = sorted(filter(isprime, numbers), reverse=True)

    result = 1
    for prime in primes:
        result = result * prime

    divides = False
    while divides == False:
        divides = True
        for number in numbers:
            remainder = result % number
            if remainder > 0:
                divides = False
                factor = float(number) / float(remainder)
                result = int(result * factor)

    return result

print smallestmultiple(range(1,21))
