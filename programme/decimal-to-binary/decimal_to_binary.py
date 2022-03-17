def convert(a):
    l = []
    k = 0
    while a>0:
        k = a%2
        l.append(str(k))
        a=a//2
    print("".join(l[::-1]))


a = int(input("Input: "))
convert(a)