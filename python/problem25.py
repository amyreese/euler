
def fib():
    p = 1
    q = 1

    while True:
        yield p

        p, q = q, p + q

limit = 1000
i = 1

for n in fib():
    s = str(n)

    if len(s) >= limit:
        print i
        break

    i += 1
