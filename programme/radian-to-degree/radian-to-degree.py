# Write a programme to convert radian to degree
import math

radian = float(input("Input radian : "))

degrees = radian*(180/math.pi)

print("\nDegree :", round(degrees, 5))
