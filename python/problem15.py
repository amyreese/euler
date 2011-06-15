
def moves(size=0, depth=0, right=0, down=0):
    #print depth, right, down

    if depth >= size * 2:
        return 1

    count = 0
    if (right < size):
        count += moves(size, depth+1, right+1, down)

    if (down < size):
        count += moves(size, depth+1, right, down+1)

    return count

print moves(size=5)
