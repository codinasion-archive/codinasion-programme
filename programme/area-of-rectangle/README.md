---
title: Area of rectangle
description: Write a programme to find area of rectangle
tags:
  - python
  - c
  - cpp
  - java
  - js
  - cs
  - go
contributors:
  - giftcup
  - harshi1122
  - ramanand-rv
  - gilazani
  - mathcodes
  - Dentyr
  - rossilor95
---

## Write a program to compute the area of a rectangle

```txt
length  : 2
breadth : 3

area : 6
```

---

<CodeBlock>

```python
# input length
x = int(input('length  : '))

# input breadth
y = int(input('breadth : '))

# output area
print('\narea : ', x*y)
```

```c
#include <stdio.h>
#include <assert.h>

double area_of_rectangle(double length, double breadth);
void test(void);

int main(void)
{
    double area, length, breadth;

    test();

    printf("length : ");
    scanf("%lf", &length);
    printf("breadth : ");
    scanf("%lf", &breadth);

    area = area_of_rectangle(length, breadth);
    printf("area : %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_rectangle(double length, double breadth)
{
    return length * breadth;
}

// checks correctness of the area calculation
void test(void)
{
    assert(area_of_rectangle(2, 3) == 6);
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double length, width;

  // input sides
  cout << "Enter length : ";
  cin >> length;

  cout << "Enter breadth : ";
  cin >> width;

  double result = length * width;
  // output area
  cout << "\nArea of rectangle : " << result << endl;

  return 0;
}
```

```java
import java.util.Scanner;

public class areaOfRectangle {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		// taking length input
		System.out.print("Enter the length  : ");
		int length = sc.nextInt();

		// taking breadth input
		System.out.print("Enter the breadth : ");
		int breadth = sc.nextInt();

		// calculating area of a rectangle
		int area = length * breadth;

		// printing the final answer
		System.out.println("\nArea of rectangle : " + area);

		sc.close();
	}
}
```

```js
const rectangleArea = (length, breadth) => {
  let area = length * breadth;

  return area;
};

console.log("length  : 2");
console.log("breadth : 3");
console.log("\narea : ", rectangleArea(2, 3));
```

```cs
using System;

public class AreaOfRectangle
{
    public static void Main(String[] args)
    {
        int length;
        int width;
        Console.Write("Enter Length : ");
        length = int.Parse(Console.ReadLine());
        Console.Write("Enter Width  : ");
        width = int.Parse(Console.ReadLine());
        Console.WriteLine("\nThe area is {0}", length * width);
    }
}
```

```go
package main

import (
	"fmt"
	"math"
)

func areaOfRectangle(length, breadth float64) float64 {
	return length * breadth
}

func roundFloat(val float64, precision uint) float64 {
	var ratio float64 = math.Pow(10, float64(precision))
	return math.Round(val*ratio) / ratio
}

func main() {
	var length, breadth, area float64

	fmt.Print("length  : ")
	fmt.Scan(&length)

	fmt.Print("breadth : ")
	fmt.Scan(&breadth)

	area = areaOfRectangle(length, breadth)
	fmt.Println("\narea : ", roundFloat(area, 2))
}
```

</CodeBlock>
