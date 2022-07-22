// Write a programme to generate a random prime number in range n1-n2

/*
Programm take as given that inputs are always lower<upper
Normally we would need a input control to confirm that the uper argument is always bigger
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int lower, upper, num;

  srand(time(0));
  printf("Enter lower limit : ");
  scanf("%d", &lower);
  printf("Enter upper limit : ");
  scanf("%d", &upper);

  int check = 2 % 2;

  printf("\nThe random number is : %d\n", (rand() % (upper - lower + 1)) + lower);

  return 0;
}
