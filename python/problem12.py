
import math

def primefactors(number):
    remaining = number
    factors = {}

    n = 2

    while n <= remaining:
        while remaining % n == 0:
            if n in factors:
                factors[n] += 1
            else:
                factors[n] = 1
            remaining = remaining / n

        if n > 2:
            n += 2
        else:
            n += 1

    return factors

def factor(number):
    factors = [number,1]

    root = int(math.floor(number ** 0.5))
    if root * root == number:
        factors.append(root)

    n = 2
    while n < root:
        if number % n == 0:
            factors.append(n)
            factors.append(number / n)

        n += 1

    return factors

def triangle():
    t = 1
    n = 2

    while True:
        t += n
        yield t

        n += 1

triangles = triangle()

for t in triangles:
    primes = primefactors(t)

    factors = 1
    for prime in primes:
        p = primes[prime] + 1
        factors *= p

    if factors > 500:
        print t
        break

