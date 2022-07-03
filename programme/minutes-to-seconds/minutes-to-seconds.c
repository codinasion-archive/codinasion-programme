// Write a programme to convert minutes to seconds
#include <stdio.h>

int main(void)
{
    double minutes;
    printf("Min : ");
    scanf("%lf", &minutes);
    int seconds = minutes * 60;
    printf("Sec : %d\n", seconds);
    return 0;
}
