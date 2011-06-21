import math

def factors(number):
    divisors = [1]

    root = int(math.floor(number ** 0.5))
    if root * root == number:
        divisors.append(root)

    n = 2
    while n < root:
        if number % n == 0:
            divisors.append(n)
            divisors.append(number / n)

        n += 1

    return divisors

limit = 10000
a = 3

numbers = {}

while a < limit:
    a += 1

    if a in numbers:
        continue

    b = sum(factors(a))

    if a == b:
        continue

    db = sum(factors(b))

    if a == db:
        numbers[a] = True
        numbers[b] = True

print sum(numbers.keys())
