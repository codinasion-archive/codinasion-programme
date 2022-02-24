#Write a Python programme to find the area of circle.
import math
# Vars
r = int(input("Enter circle radius: ")) #radius input from user
AOC = round((math.pi*(r**2)),2) #area of circle
areaofc = "The Area of the circle is {}."   
print(areaofc.format(AOC));
