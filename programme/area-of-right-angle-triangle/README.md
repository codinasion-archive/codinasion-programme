---
title: Area of Right Angle Triangle
description: Write a programme to find area of right angle triangle
tags:
  - python
  - java
  - c
  - cpp
contributors:
  - SpadeQ22
  - GodKimba
  - giftcup
---

## Write a program to compute the area of a right angle triangle

```
base  : 2
height : 3

area : 3
```

---

<CodeBlock>

```python
# input base
base = input('Enter the base of the triangle : ')

# input height
height = input('Enter the height of the triangle : ')

# output area
print('\nThe area of the right angle triangle is : ', int(base) * int(height) / 2)
```

```java
import java.util.*;

class area {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // input base
        System.out.print("base : ");
        double base = sc.nextDouble();

        // input height
        System.out.print("height : ");
        double height = sc.nextDouble();

        // calculate area
        double area = 0.5 * base * height;

        // print output
        System.out.println("\narea : " + area);
    }
}
```

```c
#include <stdio.h>
#include <assert.h>

double area_of_right_angle_triangle(double base, double height);
void test(void);

int main(void)
{
    double area, base, height;

    test();

    printf("base : ");
    scanf("%lf", &base);
    printf("height : ");
    scanf("%lf", &height);
    area = area_of_right_angle_triangle(base, height);
    printf("\narea : %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_right_angle_triangle(double base, double height)
{
    return 0.5 * base * height;
}

// checks correctness of the area calculation
void test(void)
{
    assert(area_of_right_angle_triangle(2, 3) == 3);
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    double base, height;

    // input base
    cout << "base : ";
    cin >> base;

    // input height
    cout << "height : ";
    cin >> height;

    // calculate area
    double area = 0.5 * base * height;

    // print area
    cout << "\narea : " << area << endl;
}
```

</CodeBlock>
