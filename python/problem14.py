
def collatz(start):
    n = start

    while n > 1:
        if n % 2 == 0:
            n = n / 2
        else:
            n = 3 * n + 1

        yield n

longest = 0
longest_seed = 0
seed = 999999
limit = 1

history = {}

while seed > limit:
    seq = collatz(seed)
    count = 1

    for n in seq:
        if n in history and history[n] > count:
            break

        history[n] = count

        count += 1

    if count > longest:
        longest = count
        longest_seed = seed

    seed -= 1

print longest_seed, longest
