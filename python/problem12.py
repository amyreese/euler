
def factor(number):
    n = number / 2

    factors = [number]

    while n > 1:
        if number % n == 0:
            factors.append(n)

        n -= 1

    factors.append(1)
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

most = 0
count = 0

for t in triangles:
    count += 1
    f = factor(t)

    if len(f) > most:
        most = len(f)

    if count % 50 == 0:
        print count, most

    if len(f) > 500:
        print t
        break

