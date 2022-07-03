// Write a program to find average of numbers
#include <stdio.h>

int main()
{
    int N, num;
    printf("Numbers count : ");
    scanf("%d", &N);
    printf("\nEnter %d Numbers\n", N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        printf("Enter : ");
        scanf("%d", &num);
        sum += num;
    }
    printf("\nAverage is : %.2f\n", (sum * 1.0) / N);
}
