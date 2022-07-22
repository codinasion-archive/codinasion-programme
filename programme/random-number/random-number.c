#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower, upper;

    srand(time(0));
    printf ("Enter lower limit: ") ;
    scanf ("%d", &lower);
    printf ("Enter upper limit: ") ;
    scanf ("%d", &upper);

    printf("The random numbers are: ");
    for (int i = 0; i < 1; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }

    return 0;
}