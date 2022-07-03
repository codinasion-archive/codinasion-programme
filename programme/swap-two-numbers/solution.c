// Write a program to swap two numbers
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("\nOutput: a = %d , b = %d\n", a, b);
    return 0;
}
