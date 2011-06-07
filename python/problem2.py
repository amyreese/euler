
def fib(size=-1):
    def inner():
        count = 0
        last = 0
        current = 1

        while size < 0 or count < size:
            last, current = current, last + current

            if current > 4000000:
                break

            count += 1
            yield current

    return inner()

print sum((i for i in fib() if i % 2 == 0))
