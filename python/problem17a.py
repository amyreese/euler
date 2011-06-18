
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

