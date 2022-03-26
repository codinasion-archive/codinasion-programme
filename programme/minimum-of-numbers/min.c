// Write a program to print the minimum of given numbers
#include <stdio.h>
#include <limits.h>

int main()
{
    // Initializes the min variable as the maximum integer possible
    int min = INT_MAX, n, test;
    printf("Enter amount of numbers : ");
    scanf("%i", &n);
    printf("\n");

    // Input one number at a time
    while (n > 0)
    {
        printf("Enter number : ");
        scanf("%i", &test);
        if (test < min)
            min = test;
        n--;
    };
    // Output
    printf("\nThe minimum is : %i\n", min);
    return 0;
}
