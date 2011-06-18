
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

hundredonly = len("hundred")
hundredand = len("hundredand")
thousands = hundred * 10 + onetonine * 100 + hundredonly * 9 + hundredand * 891 + len("onethousand")

print thousands

