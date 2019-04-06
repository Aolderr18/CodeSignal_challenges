def powersOfTwo(n):
    powers = []
    dest = n 
    while dest > 0:
        p = 0
        while 2**p <= dest:
            p = p + 1
        p = p - 1 
        powers.append(2**p)
        dest = dest - 2**p 
    powers.reverse()
    return powers;
