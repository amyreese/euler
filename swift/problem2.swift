func fib(limit: Int) -> Int
{
    var sum = 0
    var last = 0
    var current = 1

    while last < limit {
        (last, current) = (current, last + current)

        if current % 2 == 0 {
            sum += current
        }
    }

    return sum
}

print(fib(4000000))
