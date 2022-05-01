/* C Program to Find the area of trapezoid */

#include <stdio.h>
 
int main()
{
    float base1, base2, height;
    float area;
 
    printf("Base 1 : "); 
    scanf("%f", &base1);

    printf("\nBase 2 : "); 
    scanf("%f", &base2);

    printf("\nHeight : "); 
    scanf("%f", &height);

    area = (base1+base2)*height/2;

    printf("\nArea: %.2f", area);
    return 0;
}