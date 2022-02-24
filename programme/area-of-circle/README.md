## Write a Python programme to find the area of circle.

Additional information
```
r : radius of circle
pi : 3.141
```
Programme
```
Enter r : 3
Area : 28.27
```
Formula
```
Area of circle = pi * (r^2)
```

#### Python
```python
#Write a Python programme to find the area of circle.
import math
#Vars
r = int(input("Enter circle radius: ")) #radius input from user
AOC = round((math.pi*(r**2)),2) #area of circle
areaofc = "The Area of the circle is {}."
print(areaofc.format(AOC));
```
