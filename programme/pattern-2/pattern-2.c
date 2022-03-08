// Write a programme to print the given pattern
#include <stdio.h>

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            printf(" ");
        }
        for (int m = n; m > i; m--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
