---
title: Area of square
description: Write a programme to find area of square
image: hero.png
tags:
  - java
  - c
  - python
  - cs
  - cpp
  - go
  - js
contributors:
  - giftcup
  - jessicant
  - harshi1122
  - Mrczarny
  - ramanand-rv
  - MadhuS-1605
  - victoriacheng15
---

## Write a program to find the area of a square

```txt
side : 4

area : 16
```

---

<CodeBlock>

```java
import java.util.*;

class Solution {
    public static void main(String[] arg) {
        int side = input();
        int area = computeArea(side);
        finish(area);
    }

    private static int input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("side : ");
        int side = sc.nextInt();
        sc.close();
        return side;
    }

    private static int computeArea(int side) {
        return side * side;
    }

    private static void finish(int area) {
        System.out.println("area : " + area);
    }
}
```

```c
#include <stdio.h>
#include <assert.h> // for the assert function

double area_of_square(double side);
void test(void);

int main(void)
{
    double area, side;

    test();

    printf("side : ");
    scanf("%lf", &side);

    area = area_of_square(side);
    printf("\narea : %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_square(double side)
{
    return side * side;
}

// checks correctness of the area calculation
void test(void)
{
    assert(area_of_square(4) == 16);
}
```

```python
# input side
x = int(input('side : '))

# output srea
print('area :', x**2)
```

```cs
using System;

public class SquareArea
{
    static void Main(string[] args)
    {
        double SquareArea(string input)
        {
            return Math.Pow(double.Parse(input), 2);
        }

        // Input numbers
        Console.Write("Enter side : ");
        string input = Console.ReadLine();

        // output sum of numbers
        Console.WriteLine("\nArea of square : " + SquareArea(input));
    }
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double side;

  // input
  cout << "Enter side length : ";
  cin >> side;

  double area = side * side;

  // output area
  cout << "Area of Square : " << area << endl;

  return 0;
}
```

```go
package main

import "fmt"

func main() {
	var a float64
	fmt.Print("Enter the value of a : ")
	fmt.Scan(&a)
	fmt.Println("\nThe area of the square is :", a*a)
}
```

```js
function areaSquare(num) {
  return num ** 2;
}

const num = 4;
console.log(`The area of square for ${num} is ${areaSquare(num)}`);
```

</CodeBlock>
