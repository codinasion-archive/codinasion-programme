// Write a programme to find the area of circle
#include <stdio.h>

#define PI 3.141f

int main(void)
{
    float r;
    printf("Enter r : ");
    scanf("%f", &r);

    float area = PI * r * r;

    printf("\nArea : %.2f\n", area);
}
