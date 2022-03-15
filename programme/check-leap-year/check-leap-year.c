// Write a programme to check leap year
#include <stdio.h>

int main()
{
    int year;

    // input year
    printf("Input  : ");
    scanf("%d", &year);

    // output result
    printf("Output : ");
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
}
