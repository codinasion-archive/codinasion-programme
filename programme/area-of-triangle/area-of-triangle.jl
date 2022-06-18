# WAP to compute area of trapezoid

using Printf

print("Enter a :")
a = parse(Int32,readline())

print("Enter b :")
b = parse(Int32,readline())

print("Enter c :")
c = parse(Int32,readline())

s = (a+b+c)/2

@printf("\ns : %0.2f \n \n", s)

area = sqrt(s*(s-a)*(s-b)*(s-c))

@printf("Area : %0.2f", area)