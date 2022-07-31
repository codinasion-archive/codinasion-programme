// Write a programmeto print the reverse of a number
#include <stdio.h>

int main()
{
    int a, n;
    printf("Input  : ");
    scanf("%d", &a);
    printf("Output : ");
    while (a > 0)
    {
        n = a % 10;
        printf("%d", n);
        a /= 10;
    }
    printf("\n");
    return 0;
}
