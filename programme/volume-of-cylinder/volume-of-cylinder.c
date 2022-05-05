/* Program to Find the volume of cylinder */

#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    float height;
    float volume;

    printf("Radius : ");
    scanf("%f", &radius);

    printf("Height : ");
    scanf("%f", &height);

    volume = (radius * radius) * height * M_PI;

    printf("\nVolume : %.2f\n", volume);
    return 0;
}
