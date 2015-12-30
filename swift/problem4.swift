var numbers = 900..<1000
var products = Array<Int>()

for i in numbers {
    for k in numbers {
        products.append(i * k)
    }
}

for n in products.sort().reverse() {
    var s = String(n)
    var r = String(s.characters.reverse())

    if s == r {
        print(n)
        break
    }
}
