# print a pattern

# * * * * *
#   * * * *
#     * * *
#       * *
#         *

def printPattern(n):
    for i in reversed(range(1, n+1)):
        print((i*" *").rjust(2*n))


printPattern(14)
