## Write a program to find the area of a square.

```
side : 4

area : 16
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

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
