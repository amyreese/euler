
def sieve():
    yield 2

    composites = {}
    n = 3

    while True:
        p = composites.pop(n, 0)

        if p:
            x = n + p
            while x in composites:
                x += p

            composites[x] = p

        else:
            yield n
            composites[n*n] = 2*n

        n += 2

target = 10001
primes = sieve()

n = 1
while n <= target:
    prime = primes.next()
    n += 1

print prime
