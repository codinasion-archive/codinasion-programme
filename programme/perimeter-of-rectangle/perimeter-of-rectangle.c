// Write a programme to find perimeter of rectangle.

#include <stdio.h>

int main()
{
    double length, breadth, perimeter;

    printf("length  : ");
    scanf("%lf", &length);
    printf("breadth : ");
    scanf("%lf", &breadth);

    perimeter = 2 * (length + breadth);
    printf("\nperimeter : %g\n", perimeter);
    return 0;
}
