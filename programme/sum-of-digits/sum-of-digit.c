// Write a programme to print sum of digits.
#include <stdio.h>

int main()
{
    int num, d, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    printf("Sum of digits : %d\n", sum);
    return 0;
}
