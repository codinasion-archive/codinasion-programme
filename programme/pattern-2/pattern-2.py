# print pattern

#     *
#    * *
#   * * *
#  * * * *
# * * * * *
#  * * * *
#   * * *
#    * *
#     *

def printPattern(n):
    for i in range(1, n+1):
        print((i*"* ").rjust(n+i))
    for i in reversed(range(1, n)):
        print((i*"* ").rjust(n+i))


printPattern(3)
