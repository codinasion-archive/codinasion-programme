// Write a programme to compute the volume of a Sphere
#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    printf("Enter the radius : ");
    scanf("%lf", &radius);
    double area = (4 / 3.0) * M_PI * radius * radius * radius;
    printf("\nThe volume of sphere : %.2lf\n", area);
    return 0;
}
