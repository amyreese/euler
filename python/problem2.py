
def fib(limit):
    last = 0
    current = 1

    while current < limit:
        last, current = current, last + current

        yield current

print sum((i for i in fib(4000000) if i % 2 == 0))
