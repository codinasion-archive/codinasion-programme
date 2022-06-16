---
title: Area of a trapezoid
description: Write a program to compute area of trapezoid
image: hero.png
tags:
  - cs
  - python
  - java
  - c
  - cpp
  - go
  - javascript
contributors:
  - lt77777
  - jongwon254
  - Anzo52
  - yougottawork
  - Dafodils
  - MadhuS-1605
  - victoriacheng15
---

## Write a program to compute area of trapezoid

```txt
Base 1 : 5
Base 2 : 10
Height : 7

Area : 52.5
```

---

<CodeBlock>

```cs
using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.Write("Base 1 : ");
        double base1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Base 2 : ");
        double base2 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Height : ");
        double height = Convert.ToDouble(Console.ReadLine());

        double area = (base1 + base2) * height / 2;
        Console.WriteLine("\nThe area of trapezoid is : " + area);

    }
}
```

```python
base1 = int(input('Base 1 : '))
base2 = int(input('Base 2 : '))
height = int(input('Height : '))

area = (base1 + base2) * height * 0.5
print('\nArea:', area)
```

```java
import java.util.Scanner;

public class AreaOfTrapezoid {

    public static double area(double base1, double base2, double height) {
        return ((base1 + base2) / 2) * height;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Base 1 : ");
        double base1 = sc.nextDouble();
        System.out.print("Base 2 : ");
        double base2 = sc.nextDouble();
        System.out.print("Height : ");
        double height = sc.nextDouble();
        System.out.println("\nArea : " + area(base1, base2, height));
        sc.close();
    }
}
```

```c
#include <stdio.h>

int main()
{
    float base1, base2, height;
    float area;

    printf("Base 1 : ");
    scanf("%f", &base1);

    printf("Base 2 : ");
    scanf("%f", &base2);

    printf("Height : ");
    scanf("%f", &height);

    area = (base1 + base2) * height / 2;

    printf("\nArea: %.2f\n", area);
    return 0;
}
```

```cpp
#include <iostream>

using namespace std;

int main()
{

    int base1, base2, height;

    cout << "Enter base1  : ";
    cin >> base1;

    cout << "Enter base2  : ";
    cin >> base2;

    cout << "Enter height : ";
    cin >> height;

    float area = (float)(base1 + base2) * height / 2;
    cout << "\nArea of trapezoid : " << area << endl;

    return 0;
}
```

```go
package main

import "fmt"

func main() {
	var a, b, h float64
	fmt.Print("Enter the value of a : ")
	fmt.Scan(&a)
	fmt.Print("Enter the value of b : ")
	fmt.Scan(&b)
	fmt.Print("Enter the value of h : ")
	fmt.Scan(&h)
	fmt.Println("\nThe area of the trapezoid is :", (a+b)*h/2)
}
```


```javascript
function areaTrapezoid(base1, base2, height) {
  return ((base1 + base2) * height) / 2;
}

const base1 = 5;
const base2 = 10;
const height = 7;
console.log("Input  :", base1, base2, height);
console.log("Output :", areaTrapezoid(base1, base2, height));
```

</CodeBlock>
