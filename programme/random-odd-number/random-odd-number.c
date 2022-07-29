// Write a programme to generate a random odd number in range n1-n2

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

  printf("\nThe random numbers is : ");

  while (check == 0)
  {
    num = (rand() % (upper - lower + 1)) + lower;
    check = num % 2;
  }
  printf("%d\n", num);

  return 0;
}
