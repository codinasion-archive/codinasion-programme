## Write a program compute the area of a right angle triangle

```
length : 2
breadth : 3

area : 3
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```c
/**
 * Computes the area of a right angle triangle
 */

#include <stdio.h>
#include <assert.h>         // for the assert function

double area_of_right_angle_triangle(double base, double height);
void test(void);

int main(void) {
    double area, base, height;

    test();

    printf("base: ");
    scanf("%lf", &base);
    printf("height: ");
    scanf("%lf", &height);
    area = area_of_right_angle_triangle(base, height);
    printf("area: %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_right_angle_triangle(double base, double height) {
    return 0.5 * base * height;
}

// checks correctness of the area calculation
void test(void) {
    assert(area_of_right_angle_triangle(2, 3) == 3);
}
```