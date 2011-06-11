
from primes import sieve

primes = sieve()
result = 0

for prime in primes:
    if prime > 2000000:
        break

    result += prime

print result, prime
