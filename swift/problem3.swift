func primefactors(number: UInt) -> Array<UInt>
{
    var n: UInt = 2
    var remaining: UInt = number
    var factors = Set<UInt>()

    while n <= remaining {
        while remaining % n == 0 {
            factors.insert(n)
            remaining = remaining / n
        }

        n += (n > 2 ? 2 : 1)
    }

    return factors.sort()
}

print(primefactors(600851475143))
