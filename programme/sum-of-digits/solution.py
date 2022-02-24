# Write a program to print sum of digits.
n = int(input("Enter the number: "))
sum_digits = 0
while n > 0:
    rem = n % 10
    sum_digits += rem
    n = n // 10
print(sum_digits)
