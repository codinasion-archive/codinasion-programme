// Write a program to print fibonacci series without using recursion
#include <stdio.h>

int main()
{
    int a = 0, b = 1, temp = 0, n;
    printf("Input  : ");
    scanf("%d", &n);
    int i = 0;
    printf("Output : ");
    while (i != n)
    {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    printf("\n");
    return 0;
}