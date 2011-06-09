
def isprime(number):

    if number < 2:
        return False

    if number < 4:
        return True

    if number % 2 == 0:
        return False

    n = 3
    m = number / 2 + 1
    while n < m:
        if number % n == 0:
            return False

        n += 2

    return True

