#include <stdio.h>

float getD1();
float getD2();

int main() {
    float d1 = getD1();
    float d2 = getD2();
    float ans = (d1 * d2) / 2;
    printf("Area of rhombus: %f", ans);
    return 0;
}
float getD1() {
    float x;
    printf("Diagonal 1: ");
    scanf("%f", &x);
    return x;
}

float getD2() {
    float y;
    printf("Diagonal 2: ");
    scanf("%f", &y);
    return y;
}
