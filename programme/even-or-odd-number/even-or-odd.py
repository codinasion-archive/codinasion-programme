# Write a programme to check a number even or odd
# n = 3 -> Odd Number, n=2 -> Even Number

def even_or_odd(num):
    return "Even" if num % 2 == 0 else "Odd"


n = int(input("Input  : "))
print("Output :", even_or_odd(n))
