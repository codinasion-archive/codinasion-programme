// Write a c program to convert number to strings.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, num = 0, digits;

    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    digits = (int)log10(n);

    while (n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    digits = digits - ((int)log10(num));

    while (num != 0)
    {
        switch (num % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        num /= 10;
    }
    while (digits)
    {
        printf("Zero ");
        digits--;
    }

    return 0;
}