// Write a programme to calculate compound interest

#include <stdio.h>
#include <math.h>

int main()
{
    int P, T, R;
    printf("Enter P : ");
    scanf("%d", &P);
    printf("Enter T : ");
    scanf("%d", &T);
    printf("Enter R : ");
    scanf("%d", &R);

    float A = pow((1.0 + (R * 1.0) / 100), (T * 1.0)) * P;
    printf("\nAmount : %.2f\n", A);
    float C = A - P;
    printf("Compound Interest : %.2f\n", C);

    return 0;
}
