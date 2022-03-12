# Write a program to print sum of square
# Input
n = int(input('Input : '))

# Finding sum of square
total = [x**2 for x in range(1, n+1)]

# Output
print('Output: ', sum(total))
