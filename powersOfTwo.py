'''
Every positive integer can be uniquely represented as a sum of different positive powers of two.

Given a number n, return a sorted array of different powers of two that sum up to n
'''
def powersOfTwo(n):
    powers = []
    while n > 0:
        p = 0
        while 2**p <= n:
            p = p + 1
        p = p - 1 
        powers.append(2**p)
        n = n - 2**p 
    powers.reverse()
    return powers;
