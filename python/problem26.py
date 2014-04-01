import bigfloat
from multiprocessing import Pool
import sys

dmin = 1
dmax = 1000
precision = 8192
fuzz = 5
min_repeats = 3
workers = 1

def is_repeating(substr, whole_string):
    p = 0
    repeats = 0
    remaining = whole_string

    while remaining:
        if len(remaining) >= len(substr):
            if remaining.startswith(substr):
                repeats += 1
            else:
                return 0

        else:
            if substr[:len(remaining)] == remaining:
                repeats += 1
            else:
                return 0

        remaining = remaining[len(substr):]

    return repeats

def longest_repeat(d):
    context = bigfloat.precision(precision)
    result_float = bigfloat.div(1, d, context=context)
    result = str(result_float)[2:].strip('0')[:-fuzz]
    result_len = len(result)

    #print "d = {0}, result = {1}".format(d, result)

    longest = ''
    longest_len = 0
    found = set()

    for i in range(result_len):
        remaining = result[i:]

        for k in range(i+1, result_len):
            substr = result[i:k]
            substr_len = len(substr)

            if substr == '0' * substr_len:
                continue

            new_substr = True
            for f in found:
                if substr == f:
                    new_substr = False
                elif is_repeating(f, substr):
                    new_substr = False

            if not new_substr:
                continue

            #print "new substring {0}".format(substr)

            repeats = is_repeating(substr, remaining)

            #print "substring {0} repeats {1} times".format(substr, repeats)

            if repeats >= min_repeats:
                #print "found repeating substring {0} (occurred {1} times)".format(substr, repeats, i=i, k=k)

                found.add(substr)

                if longest_len < substr_len:
                    #print "new longest substr!"
                    longest = substr
                    longest_len = substr_len

            if remaining[1:] == remaining[1] * len(remaining[1:]):
                #print "remaining string is all the same"
                break

        if found:
            #print "Already found repeating substrings, short-circuiting"
            break

        if remaining == remaining[0] * len(remaining):
            #print "remaining string is all the same"
            break

    if longest:
        #print "longest substring for d = {0} is {1}".format(d, longest)
        pass

    return longest

longest_len = 0
longest_substr = ''
longest_d = 0

for d in range(dmin, dmax):
    sys.stdout.write('.')
    if d % 50 == 0:
        sys.stdout.write("%d\n" % d)
    sys.stdout.flush()

    substr = longest_repeat(d)
    substr_len = len(substr)

    if substr_len > longest_len:
        longest_len = substr_len
        longest_d = d
        longest_substr = substr

print ""
print ("longest substr: d = {0}, len = {1}, substr = {2}"
       "".format(longest_d, longest_len, longest_substr))

