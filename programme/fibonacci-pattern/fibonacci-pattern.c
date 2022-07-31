// Write a programme to print Fibonacci pattern

#include <stdio.h>
#include <math.h>

#define SQRT_OF_5 (sqrt(5.0))
#define PHI ((1 + SQRT_OF_5) / 2)
#define PSI ((1 - SQRT_OF_5) / 2)

long long fib(long long n)
{
    return (long long)((pow(PHI, n) - pow(PSI, n)) / SQRT_OF_5);
}

int main(void)
{
    int n;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("%lld ", fib(j));
        }
        printf("%lld\n", fib(i));
    }
}
