
onetonine = len("onetwothreefourfivesixseveneightnine")
onetoten = onetonine + len("ten")
eleventotwenty = len("eleventwelvethirteenfourteenfifteensixteenseventeeneighteennineteen")
twenties = len("twenty")*10 + onetonine
thirties = len("thirty")*10 + onetonine
forties = len("forty")*10 + onetonine
fifties = len("fifty")*10 + onetonine
sixties = len("sixty")*10 + onetonine
seventies = len("seventy")*10 + onetonine
eighties = len("eighty")*10 + onetonine
nineties = len("ninety")*10 + onetonine

hundred = onetoten + eleventotwenty + twenties + thirties + forties + fifties + sixties + seventies + eighties + nineties

onehundreds = len("onehundredand") * 100 - 3 + hundred
twohundreds = len("twohundredand") * 100 - 3 + hundred
threehundreds = len("threehundredand") * 100 - 3 + hundred
fourhundreds = len("fourhundredand") * 100 - 3 + hundred
fivehundreds = len("fivehundredand") * 100 - 3 + hundred
sixhundreds = len("sixhundredand") * 100 - 3 + hundred
sevenhundreds = len("sevenhundredand") * 100 - 3 + hundred
eighthundreds = len("eighthundredand") * 100 - 3 + hundred
ninehundreds = len("ninehundredand") * 100 - 3 + hundred

thousands = len("onethousand") + ninehundreds + eighthundreds + sevenhundreds +\
sixhundreds + fivehundreds + fourhundreds + threehundreds + twohundreds +\
onehundreds + hundred

print thousands

hundredonly = len("hundred")
hundredand = len("hundredand")
thousands = hundred * 10 + onetonine * 100 + hundredonly * 9 + hundredand * 891 + len("onethousand")

print thousands

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
