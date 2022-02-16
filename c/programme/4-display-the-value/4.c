// Given the values of three variables a, b and c, write a program to compute and display the value of x, where x=a/(b-c)

#include <stdio.h>

void main()
{
    int a = 250, b = 85, c = 25;
    int x = a / (b - c);
    printf("value of x = %d\n", x);
}