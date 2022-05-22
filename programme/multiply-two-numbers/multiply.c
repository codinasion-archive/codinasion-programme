#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int product = a * b;

    printf("%d * %d = %d\n", a, b, product);
    return 0;
}