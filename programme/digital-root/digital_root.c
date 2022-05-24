// Write a programme for Digital Root of a number

#include <stdio.h>

int digital_root(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + ((n - 1) % 9);
    }
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int ans = digital_root(n);
    printf("\n");
    printf("Digital Root Value : %d\n", ans);
    return 0;
}
