
from discrete import factorial

digits = list("0123456789")
limit = 999999

total = 0
result = ""

p = len(digits) - 1
while p >= 0:
    f = factorial(p)

    q = 0
    while total + (q+1) * f <= limit:
        q += 1

    total += q * f

    digit = digits[q]
    digits.remove(digit)
    result += digit

    p -= 1

print result
