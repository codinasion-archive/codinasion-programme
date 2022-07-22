// Write a programme to generate a random number in range n1-n2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int lower, upper;

  srand(time(0));
  printf("Enter lower limit : ");
  scanf("%d", &lower);
  printf("Enter upper limit : ");
  scanf("%d", &upper);

  printf("\nThe random number is : %d\n", ((rand() % (upper - lower + 1)) + lower));

  return 0;
}
