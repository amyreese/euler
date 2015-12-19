from __future__ import print_function, division, unicode_literals

target = 200
coins = [
    200,
    100,
    50,
    20,
    10,
    5,
    2,
    1,
]

coin_maximums = {
    coin: target // coin for coin in coins
}

def find_coins(index, value):
    coin = coins[index]
    cmax = coin_maximums[coin]

    valid = set()
    for k in range(cmax+1):
        v = value + (k*coin)
        if v > 200:
            break
        elif v == 200:
            valid.add((k,))
        elif index < len(coins)-1:
            s = find_coins(index+1, v)
            valid |= {(k,) + t for t in s}

    return valid

valid = find_coins(0,0)
print(len(valid))


