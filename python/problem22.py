
with open("input/names.txt") as namefile:
    namestring = namefile.readline().rstrip()

names = [name.strip('"') for name in namestring.split(",")]
names.sort()

a = ord("A") - 1
total = 0

for i,name in enumerate(names):
    score = sum([ord(name[k]) - a for k in range(len(name))])
    score *= i+1

    total += score

print total
