from primes import isprime

amax = 1000
bmax = 1000

def consecutive_primes(a,b):
    # n^2 + (a*n) + b

    n = 0
    while True:
        p = (n * n) + (a * n) + b
        if not isprime(p):
            return n

        n += 1

results = [(a, b, consecutive_primes(a,b))
            for a in range(amax * -1, amax)
            for b in range(bmax * -1, bmax)]

n, a, b = sorted(((n,a,b) for a,b,n in results if n > 1),
                reverse=True)[0]

print "a = {0}, b = {1}, n = {2}".format(a,b,n)


