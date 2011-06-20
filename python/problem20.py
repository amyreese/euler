from discrete import *

f = factorial(100)
s = str(f)

print sum([int(s[i]) for i in range(len(s))])
