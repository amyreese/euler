import math

def factors(number):
    divisors = [1]

    root = number ** 0.5
    r = int(math.floor(root))
    if r * r == number:
        divisors.append(r)

    n = 2
    while n < root:
        if number % n == 0:
            divisors.append(n)
            divisors.append(number / n)

        n += 1

    return divisors

def abundant(number):
    divisors = factors(number)
    s = sum(divisors)
    return s > number

limit = 28123

numbers = set(range(limit+1))
abundants = [n for n in range(12,limit) if abundant(n)]

for i,q in enumerate(abundants):
    for p in abundants[i:]:
        numbers.discard(q + p)

print sum(numbers), sum(range(limit+1)), sum(abundants)
