// Write a programme to compute the value of Euler's Number

#include <stdio.h>

int main()
{
    int N;
    printf("Enter N : ");
    scanf("%d", &N);
    float eNumber = 1, fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
        eNumber += (1.0 / fact);
    }
    printf("Euler Number of %d : %f\n", N, eNumber);
}
