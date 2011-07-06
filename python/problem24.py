
limit = 1
perms = {}

def findperms(seen=None):
    if seen is None:
        seen = []
    elif len(seen) >= limit:
        s = ''.join(map(str, seen))
        perms[s] = True

    for i in range(limit):
        if i in seen:
            continue

        findperms(seen + [i])

findperms()
perms = sorted(perms.keys())

if len(perms) > 1000000:
    print perms[999999]
else:
    print
