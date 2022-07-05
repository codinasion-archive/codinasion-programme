# Write a programme to compute the value of Euler's Number
from math import factorial


def e(n):
    return sum((1 / factorial(i) for i in range(0, n + 1)))


print(e(50))
