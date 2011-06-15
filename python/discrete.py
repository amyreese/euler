
def factorial(n):
    result = 1

    while n > 1:
        result *= n
        n -= 1

    return result

def combinations(n, r):
    return factorial(n) / (factorial(r) * factorial(n-r))
