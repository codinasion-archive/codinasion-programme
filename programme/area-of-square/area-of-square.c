/**
 * Computes the area of a square
 */

#include <stdio.h>
#include <assert.h>         // for the assert function

double area_of_square(double side);
void test(void);

int main(void) {
    double area, side;

    test();

    printf("Side: ");
    scanf("%lf", &side);
    area = area_of_square(side);
    printf("area: %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_square(double side) {
    return side * side;
}

// checks correctness of the area calculation
void test(void) {
    assert(area_of_square(4) == 16);
}