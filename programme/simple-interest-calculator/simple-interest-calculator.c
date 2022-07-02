// Write a programme to calculate simple interest
#include <stdio.h>

int simple_interest(int p, int t, int r)
{
    return (int)(p * t * r / 100);
}

int main(void)
{
    int p, t, r;
    printf("Enter P : ");
    scanf("%d", &p);
    printf("Enter R : ");
    scanf("%d", &r);
    printf("Enter T : ");
    scanf("%d", &t);
    printf("\nSimple Interest : %d\n", simple_interest(p, t, r));
    return 0;
}
