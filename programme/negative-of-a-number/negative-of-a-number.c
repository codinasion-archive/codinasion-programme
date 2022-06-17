// Write a program to convert number to strings.
#include <stdio.h>

float get_opposite(float number)
{
    return number * -1.0;
}

int main()
{
    float number;

    printf("Input  : ");
    scanf("%f", &number);

    float opposite = get_opposite(number);

    printf("Output : %f", opposite);
}