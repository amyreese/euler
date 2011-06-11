
from primes import sieve

target = 10001
primes = sieve()

n = 1
while n <= target:
    prime = primes.next()
    n += 1

print prime
