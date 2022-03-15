#include <stdio.h>

int decimal_to_binary(int n) {
    int bin = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2; // Same as n = n / 2
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    int decimal;
    printf("Input : ");
    scanf("%d", &decimal);
    printf("Output : %d\n", decimal_to_binary(decimal));
    return 0;
}