#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = number * number * number;

    printf("Input  : %d", number);
    printf("Output : %d", result);
    return 0;
}