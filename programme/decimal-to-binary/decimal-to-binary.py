decimal = int(input("Input : "))
binary = bin(decimal).replace("0b", "") # 0b is the prefix created by the 'bin' function
print(f"Ouput : {binary}")