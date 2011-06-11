
def isprime(number):

    if number < 2:
        return False

    if number < 4:
        return True

    if number % 2 == 0:
        return False

    n = 3
    m = number / 2 + 1
    while n < m:
        if number % n == 0:
            return False

        n += 2

    return True

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

