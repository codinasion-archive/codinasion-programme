#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("Output: a = %d , b = %d", a, b);
    return 0;
}