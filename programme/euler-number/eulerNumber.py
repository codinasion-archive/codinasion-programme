from math import factorial

def e(n):
    return sum((
        1/factorial(i) for i in range(1, n+1)
    ))