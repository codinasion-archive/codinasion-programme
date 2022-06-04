// Write a program to print the given pattern
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <stdio.h>

#define PATTERN_STR ("*")

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j >= i)
            {
                printf("%s ", PATTERN_STR);
            }
            else
            {
                printf("  ");
            }
        }
        printf("%s\n", PATTERN_STR);
    }
}

int main(void)
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
