// Write a program to print sum of digits.
#include <stdio.h>

int main() {
    int num, d, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    printf("The sum of the digits of the number: %d", sum);
    return 0;
}
