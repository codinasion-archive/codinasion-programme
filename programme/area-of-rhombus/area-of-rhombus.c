
#include <stdio.h>

int getD1();
int getD2();

int main() {
    float d1 = getD1();
    float d2 = getD2();
    float ans = (d1 * d2) / 2;
    printf("Area of rhombus: %f", ans);
    return 0;
}

int getD1() {
    float x;
    printf("Diagonal 1: ");
    scanf("%f", &x);
    return x;
}

int getD2() {
    float y;
    printf("Diagonal 2: ");
    scanf("%f", &y);
    return y;
}
