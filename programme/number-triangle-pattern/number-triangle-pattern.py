# Write a programme to print the pattern

def pattern(a):
    print("Output :")
    for i in range(1, a+1):
        c = 1
        for k in range(a, i, -1):
            print(" ", end="")
        for j in range(1, 2*i):
            if j < i:
                print(c, end="")
                c += 1
            else:
                print(c, end="")
                c -= 1
        print()


a = int(input("Input  : "))
pattern(a)
