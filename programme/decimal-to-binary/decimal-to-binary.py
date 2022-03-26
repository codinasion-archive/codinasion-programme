# Write a programme to convert decimal number to binary

decimal = int(input("Input : "))

# 0b is the prefix created by the 'bin' function
binary = bin(decimal).replace("0b", "")

print(f"Output : {binary}")
