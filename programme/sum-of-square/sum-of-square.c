// Write a programme to find sum of squares of first n natural numbers.

#include <stdio.h>

int main()
{
    int n;
    int result = 0;

    printf("n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i;
    }

    printf("\nsum : %d\n", result);
    return 0;
}
