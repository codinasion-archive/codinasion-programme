/**
 * Computes the area of a rectangle
 */

#include <stdio.h>
#include <assert.h>         // for the assert function

double area_of_rectangle(double length, double breadth);
void test(void);

int main(void) {
    double area, length, breadth;

    test();

    printf("length: ");
    scanf("%lf", &length);
    printf("breadth: ");
    scanf("%lf", &breadth);
    area = area_of_rectangle(length, breadth);
    printf("area: %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_rectangle(double length, double breadth) {
    return length * breadth;
}

// checks correctness of the area calculation
void test(void) {
    assert(area_of_rectangle(2, 3) == 6);
}