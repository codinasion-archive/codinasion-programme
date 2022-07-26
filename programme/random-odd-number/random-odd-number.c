
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower, upper, num;

    srand(time(0));
    printf ("Enter lower limit: ") ;
    scanf ("%d", &lower);
    printf ("Enter upper limit: ") ;
    scanf ("%d", &upper);

    
    int check = 2 % 2;

    printf("The random numbers are: ");
    
    while (check == 0){
        num = (rand() % (upper - lower + 1)) + lower;
        check = num % 2;
    }
    printf("%d ", num);

    return 0;
}
