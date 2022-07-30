# Write a programme to print alphabet triangle pattern
def pattern(a):
    print("Output :")
    for i in range(1, a + 1):
        c = 65
        for k in range(a, i, -1):
            print(" ", end="")
        for j in range(1, 2 * i):
            if j < i:
                print(chr(c), end="")
                c += 1
            else:
                print(chr(c), end="")
                c -= 1
        print()


a = int(input("Input  : "))
pattern(a)
