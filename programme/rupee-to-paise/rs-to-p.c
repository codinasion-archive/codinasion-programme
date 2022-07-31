// Write a programme to convert rupee to paise
#include <stdio.h>

int main()
{
    float x;

    // input in rupees
    printf("Amount in Rupees : ");
    scanf("%g", &x);

    // output in paise
    printf("Amount in Paise : %g\n", x * 100);
    return 0;
}
