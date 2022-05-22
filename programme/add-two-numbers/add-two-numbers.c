// Write a program to add two numbers

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("\n%d + %d = %d\n", a, b, sum);
    return 0;
}
