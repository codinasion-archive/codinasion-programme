// Write a program to print the maximum of given numbers
#include <stdio.h>
#include <limits.h>

int main()
{
    // Initializes the max variable as the minimum integer possible
    int max = INT_MIN, n, test;
    printf("Enter amount of numbers : ");
    scanf("%i", &n);
    printf("\n");

    // Input one number at a time
    while (n > 0)
    {
        printf("Enter number : ");
        scanf("%i", &test);
        if (test > max)
            max = test;
        n--;
    };
    // Output
    printf("\nThe maximum is : %i\n", max);
    return 0;
}
