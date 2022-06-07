---
title: Area of Circle
description: Write a programme to find the area of circle
image: hero.png
tags:
  - python
  - java
  - cpp
  - c
  - cs
  - go
  - js
contributors:
  - theanorak
  - NeelPatel31
  - karthiksbh
  - ClasherKasten
  - Dentyr
  - rossilor95
---

## Write a programme to find the area of circle

```txt
r : 3
Area : 28.27
```

---

<CodeBlock>

```python
import math

# radius input from user
r = int(input("Enter radius: "))

# output
print('Area: ', round((math.pi*(r**2)),2))
```

```java
import java.util.Scanner;

public class solution {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the radius : ");

		// taking radius input
		int r = sc.nextInt();

		// calculating area of circle
		double area = Math.PI * r * r;

		// rounding the answer to 2 decimal places
		double answer = (double) Math.round(area * 100) / 100;

		// printing the final answer
		System.out.println("Area of circle : " + answer);

		sc.close();
	}
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;
#define pi 3.141

int main()
{
    int r;

    // input radius
    cout << "Enter radius: ";
    cin >> r;

    // output area
    cout << "Area: " << floor((pi * r * r) * 100) / 100;
}
```

```c
#include <stdio.h>

#define PI 3.141f

int main(void)
{
    float r;
    printf("Enter r : ");
    scanf("%f", &r);

    float area = PI * r * r;

    printf("\nArea : %.2f\n", area);
}
```

```cs
using System;

public class AreaOfCircle
{
    public static void Main(String[] args)
    {
        Console.Write("Enter the radius : ");
        int r = int.Parse(Console.ReadLine());
        double area = Math.PI * r * r;
        double answer = Math.Round(area, 2);

        Console.WriteLine("Area of circle   : " + answer);
    }
}
```

```go
package main

import (
	"fmt"
	"math"
)

func areaOfCircle(r float64) float64 {
	return math.Pi * r * r
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var r, area float64

	fmt.Print("Enter radius : ")
	fmt.Scan(&r)

	area = areaOfCircle(r)

	fmt.Println("\nArea : ", roundFloat(area, 2))
}
```

```javascript
const areaOfCircle = function areaOfCircle(r) {
  return Math.PI * r * r;
};

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter radius : ", (userInput) => {
  const r = Number.parseFloat(userInput);
  if (!isNaN(r)) {
    area = areaOfCircle(r);
    console.log("\nArea : ", area.toPrecision(4));
    rl.close();
  } else {
    console.log("Invalid input: the input is not a number.");
    rl.close();
  }
});
```

</CodeBlock>
