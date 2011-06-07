
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
    if number % 2 == 0:
        factors = [2]
    else:
        factors = []

    n = 3
    m = number / 2

    while n < m:
        if number % n == 0:
            prime = True
            for f in factors:
                if n % f == 0:
                    prime = False
                    break

            if prime:
                factors.append(n)

        n += 2

    return factors

print primefactors(13195)
#print primefactors(600851475143)
