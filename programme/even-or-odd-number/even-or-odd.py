# Write a programme to check a number even or odd
# n = 3 -> Odd Number, n=2 -> Even Number

n = int(input("Input  : "))
print("Output : ", end="")
if n % 2 == 0:
    print("Even Number")
else:
    print("Odd Number")
