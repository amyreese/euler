
def isprime(number):
    n = 2
    m = number / 2 + 1
    while n < m:
        if number % n == 0:
            return False

        if n > 2:
            n += 2
        else:
            n += 1

    return True

def smallestmultiple(numbers):
    numbers = sorted(numbers, reverse=True)
    primes = sorted(filter(isprime, numbers), reverse=True)

    result = 1
    for prime in primes:
        result = result * prime

    divides = False
    while divides == False:
        divides = True
        for number in numbers:
            remainder = result % number
            if remainder > 0:
                divides = False
                factor = float(number) / float(remainder)
                result = int(result * factor)

    return result

print smallestmultiple(range(1,21))
