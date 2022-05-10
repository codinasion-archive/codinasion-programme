---
title: Area of a rhombus
description: Write a program to compute area of Rhombus
tags:
  - python
  - c
  - java
  - cs
  - cpp
contributors:
  - lt77777
  - jspoh
  - 20emigdal
  - amitSahu9
  - VSen910
---

## Write a program to compute the area of a rhombus

```txt
Diagonal 1 : 6
Diagonal 2 : 8

Area : 24
```

---

<CodeBlock>

```python
diagonal1 = int(input('Diagonal 1 : '))
diagonal2 = int(input('Diagonal 2 : '))

area = diagonal1 * diagonal2 * 0.5
print('\nArea : ', area)
```

```c
#include <stdio.h>

float getD1();
float getD2();

int main()
{
    float d1 = getD1();
    float d2 = getD2();
    float ans = (d1 * d2) / 2;
    printf("\nArea of rhombus : %.2f\n", ans);
    return 0;
}
float getD1()
{
    float x;
    printf("Diagonal 1 : ");
    scanf("%f", &x);
    return x;
}

float getD2()
{
    float y;
    printf("Diagonal 2 : ");
    scanf("%f", &y);
    return y;
}
```

```java
import java.util.Scanner;

public class AreaOfRhombus {
    public static void main(String[] args) {
        float diag1, diag2, area;
        Scanner diag = new Scanner(System.in);
        System.out.print("Diagonal 1 : ");
        diag1 = diag.nextInt();

        System.out.print("Diagonal 2 : ");
        diag2 = diag.nextInt();

        area = diag1 * diag2 / 2;
        System.out.println("");
        System.out.println("Area : " + area);
    }
}
```

```cs
using System;

public class AreaOfRhombus
{
    static void Main()
    {
        float d1, d2, area;
        Console.Write("Diagonal 1 : ");
        d1 = Single.Parse(Console.ReadLine());
        Console.Write("Diagonal 2 : ");
        d2 = Single.Parse(Console.ReadLine());
        area = d1 * d2 / 2;

        Console.WriteLine("\nArea : " + area);
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    double d1, d2;

    cout << "Enter the length of diagonal 1 : ";
    cin >> d1;
    cout << "Enter the length of diagonal 2 : ";
    cin >> d2;

    double area = (d1 * d2) / 2;
    cout << "\nThe area of the rhombus : " << area << endl;
    return 0;
}
```

</CodeBlock>
