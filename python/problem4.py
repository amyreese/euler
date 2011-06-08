
numbers = range(900,1000)
results = [x*y for x in numbers for y in numbers]

for result in sorted(results, reverse=True):
    forward = str(result)
    backward = forward[::-1]

    if forward == backward:
        print forward
        break

