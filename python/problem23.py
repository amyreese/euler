import math

def factors(number):
    result = 1

    root = number ** 0.5
    r = int(math.floor(root))
    if r * r == number:
        result += r

    n = 2
    while n < root:
        if number % n == 0:
            result += n
            result += number / n

        n += 1

    return result

limit = 20161

numbers = set(range(limit+1))
abundants = [n for n in range(12,limit) if factors(n) > n]

i = 0
for q in abundants:
    for p in abundants[i:]:
        r = q + p
        if r > limit:
            break

        numbers.discard(r)

    i += 1

print sum(numbers)
