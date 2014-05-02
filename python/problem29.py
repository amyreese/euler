from helpers import cache

@cache
def powers(n):
    result = set()

    for a in range(2, n+1):
        for b in range(2, n+1):
            result.add(pow(a, b))

    return result

n = 100
print len(powers(n))
