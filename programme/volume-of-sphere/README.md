---
title: Volume of Sphere
description: Write a program to compute the volume of a Sphere
image: hero.png
tags:
  - python
  - c
  - cpp
  - cs
  - js
contributors:
  - aashish-khub
  - VSen910
  - rossilor95
  - ClasherKasten
---

## Write a program to compute the volume of a Sphere

Volume of a sphere = radius \* radius \* radius \* 4/3 \* π

```
Radius : 8

Volume : 2144.66
```

---

<CodeBlock>

```python
import math

# Get radius from user
enter_radius = int(input('Radius : '))

# Calculate volume
volume = enter_radius * enter_radius * enter_radius * 4/3 * math.pi

# Print result
print("\nVolume : {:0.2f}".format((volume)))
```

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    printf("Enter the radius : ");
    scanf("%lf", &radius);
    double area = (4 / 3.0) * M_PI * radius * radius * radius;
    printf("\nThe volume of sphere : %.2lf\n", area);
    return 0;
}
```

```cpp
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius : ";
    cin >> radius;
    double area = (4 / 3.0) * M_PI * radius * radius * radius;
    cout << "\nThe volume of the sphere: " << area << endl;
    return 0;
}
```

```cs
using System;

namespace Geometry
{
    public class VolumeOfSphere
    {
        public static double CalculateVolume(double radius)
        {
            return Math.Pow(radius, 3) * Math.PI * (4.0 / 3.0);
        }

        public static void Main()
        {
            Console.Write("Radius : ");

            if (double.TryParse(Console.ReadLine(), out double radius))
            {
                double volume = CalculateVolume(radius);
                Console.WriteLine("Volume : " + Math.Round(volume, 2));
            }
            else
            {
                Console
                    .WriteLine("The value provided for the radius is invalid");
            }
        }
    }
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Radius : ', r => {
	const v = Math.pow(Number(r), 3) * 4/3 * Math.PI;
	if (isNaN(v)) {
		console.error('Some error occured');
	} else {
		console.log(`Volume : ${v.toFixed(2).replace(/\.?0*$/,'')}`);
	}
	rl.close();
});
```

</CodeBlock>
