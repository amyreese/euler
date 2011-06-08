
k = 100
squares = sum(x**2 for x in range(1,k+1))
sums = sum(x for x in range(1,k+1))**2
print sums - squares
