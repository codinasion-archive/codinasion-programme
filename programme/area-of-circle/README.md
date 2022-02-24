## Write a programme to find the area of circle.

```
r : 3
Area : 28.27
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
import math

# radius input from user
r = int(input("Enter radius: "))

# output
print('Area: ', round((math.pi*(r**2)),2))
```
