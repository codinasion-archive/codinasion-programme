---
title: Area of Triangle
description: Write a programme to find area of triangle
image: hero.png
tags:
  - python
  - cpp
  - java
  - c
  - js
  - go
  - jl
contributors:
  - GodKimba
  - Glogius95
  - rishav-karanjit
  - Badboy-16
  - tiarabcodes1
  - rossilor95
  - SanjayShetty01
---

## Write a programme to find area of triangle

```txt
a : 10
b : 17
c : 21

s : 24

area : 84
```

---

<CodeBlock>

```python
a = float(input('Enter the length of first side  : '))
b = float(input('Enter the length of second side : '))
c = float(input('Enter the length of third side  : '))

s = (a + b + c) / 2

# calculate and output area
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('\nThe area of the triangle is %0.2f' % area)
```

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    float s = (float)(a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\ns : " << s << endl;
    cout << "\nArea : " << area << endl;

    return 0;
}
```

```java
package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a : ");
        int a = sc.nextInt();

        System.out.print("Enter b : ");
        int b = sc.nextInt();

        System.out.print("Enter c : ");
        int c = sc.nextInt();

        area(a, b, c);

        sc.close();

    }

    public static int area(int a, int b, int c) {

        int s = (a + b + c) / 2;

        int area = (int) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("\nArea of triangle : " + area);
        return area;

    }
}
```

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;

    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%lf", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\ns : %.2lf\n", s);
    printf("\narea : %.2lf\n", area);

    return 0;
}
```

```javascript
"use strict";

function area(a, b, c) {
  let s = (a + b + c) / 2;
  let product = Math.sqrt(s * (s - a) * (s - b) * (s - c));

  return product;
}

let a = prompt("a : ");
let b = prompt("b : ");
let c = prompt("c : ");
let s = (+a + +b + +c) / 2;

console.log("\ns :", s);

console.log("\narea :", area(+a, +b, +c));
```

```go
package main

import (
	"fmt"
	"math"
)

func areaOfTriangle(a, b, c, s float64) float64 {
	return math.Sqrt(s * (s - a) * (s - b) * (s - c))
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var a, b, c, s, area float64

	fmt.Print("a : ")
	fmt.Scan(&a)

	fmt.Print("b : ")
	fmt.Scan(&b)

	fmt.Print("c : ")
	fmt.Scan(&c)

	s = (a + b + c) / 2
	fmt.Print("\ns : ", s)

	area = areaOfTriangle(a, b, c, s)
	fmt.Println("\n\narea : ", roundFloat(area, 2))
}
```
```julia

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
```

</CodeBlock>
