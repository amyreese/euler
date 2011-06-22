import math

def sumofdivisors(number):
    sum = 1
    n = number
    p = 2

    while p * p <= n and n > 1:
        if n % p == 0:
            j = p * p
            n = n / p
            while n % p == 0:
                j = j * p
                n = n / p
            sum = sum * (j - 1)
            sum = sum / (p - 1)
        if p == 2:
            p = 3
        else:
            p += 2

    if n > 1:
        sum = sum * (n + 1)

    return sum - number

limit = 20161

numbers = set(range(limit+1))
abundants = [n for n in range(12,limit) if sumofdivisors(n) > n]

i = 0
for q in abundants:
    for p in abundants[i:]:
        r = p + q
        if (r > limit):
            break

        numbers.discard(r)

    i += 1

print sum(numbers)
