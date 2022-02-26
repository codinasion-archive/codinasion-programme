// Write a programme to find sum of cubes of first n natural numbers.
#include <stdio.h>

int main()
{
    int a;
    int total = 0;
    printf("Input : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    printf("Output : %d\n", total);
    return 0;
}