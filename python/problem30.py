
def power_sum(number, power):
    s = 0
    for c in str(number):
        s += pow(int(c), power)

    return s == number

print sum(i for i in range(10, 1000000) if power_sum(i, 5))
