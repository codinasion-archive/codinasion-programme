def digital_root(n):
    if n==0:
        return 0
    else:
        return 1 + ((n-1)%9)
n = int(input("Enter Number: "))
print("Digital Root :",digital_root(n))
