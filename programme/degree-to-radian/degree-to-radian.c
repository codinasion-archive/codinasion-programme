// Write a programme to convert degree to radian
#include <stdio.h>
int main() {
    float degree;
    printf("Degree: ");
    scanf("%f", &degree);
    printf("Radian: %f", 3.141592653589793*degree/180);
    return 0;
}