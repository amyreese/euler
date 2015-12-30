var numbers = 1...100

var sum_of_squares = 0
for n in numbers {
    sum_of_squares += n * n
}

var square_of_sums = 0
for n in numbers {
    square_of_sums += n
}
square_of_sums = square_of_sums * square_of_sums

print(square_of_sums - sum_of_squares)
