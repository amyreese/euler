
def wordify(number):
    words = {
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen",
        20: "twenty",
        30: "thirty",
        40: "forty",
        50: "fifty",
        60: "sixty",
        70: "seventy",
        80: "eighty",
        90: "ninety",
        100: "onehundred",
        200: "twohundred",
        300: "threehundred",
        400: "fourhundred",
        500: "fivehundred",
        600: "sixhundred",
        700: "sevenhundred",
        800: "eighthundred",
        900: "ninehundred",
        1000: "onethousand",
    }

    text = ""
    keys = sorted(words.keys(), reverse=True)
    remaining = number

    for key in keys:
        if key <= remaining:
            text += words[key]

            if 99 < key < 1000 and remaining % key > 0:
                text += "and"

            remaining -= key

        if remaining < 1:
            break

    return text

count = 0

for i in range(1,1001):
    w = wordify(i)
    l = len(w)

    count += l

print count
