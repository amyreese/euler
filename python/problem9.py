
found = False
a = 100

while not found:
    b = a + 1

    while not found:
        c = 1000 - b - a

        if a*a + b*b == c*c:
            print a,b,c,a*b*c
            found = True

        b += 1

        if b > 500:
            break


    a += 1

    if a > 333:
        break

