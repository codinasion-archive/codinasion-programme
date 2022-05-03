/* Program to Find the area of trapezoid */

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
