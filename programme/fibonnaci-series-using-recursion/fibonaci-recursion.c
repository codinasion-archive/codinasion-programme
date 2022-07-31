// Write a programme to print fibonacci series using recursion
#include <stdio.h>

int fibonacci(int);

int main()
{
    int n, i;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}
