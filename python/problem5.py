
def smallestmultiple(numbers):
    number = 1
    while True:
        divides = True
        for n in numbers:
            if number % n > 0:
                divides = False

        if divides:
            return number

        number += 1

print smallestmultiple(range(1,21))
