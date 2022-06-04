#include <stdio.h>

int main(void)
{
    int n;
    printf("Input: ");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", 2 * i);
    }
    printf("%d\n", 2 * (n - 1));
    return 0;
}