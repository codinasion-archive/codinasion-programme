// Write a programme to check prime number
#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("Input  : ");
    scanf("%d", &a);
    printf("Output : ");
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
    {
        printf("Not prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    return 0;
}
