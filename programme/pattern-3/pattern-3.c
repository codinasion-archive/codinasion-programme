// Write a python programme to print the given pattern

#include <stdio.h>

#define BOUNDARY_STR ("x")

void pattern(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%s ", BOUNDARY_STR);
    }
    printf("%s\n", BOUNDARY_STR);
    for (int i = 0; i < n - 2; i++)
    {
        printf(BOUNDARY_STR);
        for (int i = 0; i < n - 2; i++)
        {
            printf("  ");
        }
        printf(" %s\n", BOUNDARY_STR);
    }
    if (n != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            printf("%s ", BOUNDARY_STR);
        }
        printf("%s\n", BOUNDARY_STR);
    }
}

int main(void)
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
