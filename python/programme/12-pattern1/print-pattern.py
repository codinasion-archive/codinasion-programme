# print a pattern
# Make sure to install tabulate with: pip install tabulate
from tabulate import tabulate


def printPattern(n, i=0, pattern=[]):
    if n > 0:
        data = [' ' for j in range(i)] + ['*' for i in range(n)]
        # build the pattern recursively
        pattern.append(data)
        printPattern(n-1, i+1)
    else:
        print(tabulate(pattern, tablefmt='plain'))
        pattern.clear()


printPattern(5)
