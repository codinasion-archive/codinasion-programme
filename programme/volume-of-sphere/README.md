## Write a program to compute the volume of a Sphere

Volume of a cylinder = ` radius ` * ` radius ` * ` radius ` * ` 4/3 ` * ` π `

```
Radius : 8

Volume : 2144.66
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
import math

# Get radius from user
enter_radius = int(input('Radius : '))

# Calculate volume
volume = enter_radius * enter_radius * enter_radius * 4/3 * math.pi

# Print result
print("\nVolume : {:0.2f}".format((volume)))
```

