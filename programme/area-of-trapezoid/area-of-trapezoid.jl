# WAP to compute area of trapezoid

using Printf

print("Base 1 :")
b1 = parse(Int32,readline())

print("Base 2 :")
b2 = parse(Int32,readline())

print("Height :")
h = parse(Int32,readline())


@printf("Area : %0.2f", (b1+b2)*h*0.5)