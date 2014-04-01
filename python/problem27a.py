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

largest_n = 0
largest_a = 0
largest_b = 0

for a in range(amax * -1, amax):
    for b in range(bmax * -1, bmax):
        n = consecutive_primes(a,b)
        if n > largest_n:
            largest_n = n
            largest_a = a
            largest_b = b

print "a = {0}, b = {1}, n = {2}".format(largest_a,largest_b,largest_n)


