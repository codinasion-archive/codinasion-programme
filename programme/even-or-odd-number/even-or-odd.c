// Write a programme to check a number even or odd
#include <stdio.h>

int main(void)
{
    unsigned long long number;
    printf("Input  : ");
    scanf("%llud", &number);
    printf("Output : %s Number\n", number % 2 == 0 ? "Even" : "Odd");
    return 0;
}
