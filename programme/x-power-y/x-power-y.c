// Write a program to find X power Y
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    printf("Input  : ");
    scanf("%lf %lf", &x, &y);
    printf("Output : %d\n", (int)pow(x, y));
    return 0;
}
