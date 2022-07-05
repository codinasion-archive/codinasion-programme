# Write a programme to find the area of circle

print("Enter the radius : ")
r = parse(Int32, readline())

area = round(pi * r^2, digits=2)

println("Area : ", area)
