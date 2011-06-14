
import math

def factor(number):
    factors = [number,1]

    root = math.floor(number ** 0.5)
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
    yield 1

    t = 1
    n = 2

    while True:
        t += n
        yield t

        n += 1

triangles = triangle()

for t in triangles:
    f = factor(t)

    if len(f) > 500:
        print t
        break

