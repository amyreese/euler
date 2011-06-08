
def factors(number):
    factors = []

    n = 2
    m = number / 2

    while n < m:
        if number % n == 0:
            factors.append(n)

        n += 1

    return factors

def primefactors(number):
    remaining = number
    factors = set()

    n = 2
    m = number / 2

    while n < m:
        while remaining % n == 0:
            factors.add(n)
            remaining = remaining / n

        if n > 2:
            n += 2
        else:
            n += 1

        if n > remaining:
            break

    factors = list(factors)
    factors.sort()

    return factors

#print primefactors(13195)
print primefactors(600851475143)
