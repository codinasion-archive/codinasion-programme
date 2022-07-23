// Write a programme to generate a random prime number in range n1-n2

/*
Programm take as given that inputs are always lower<upper
Normally we would need a input control to confirm that the uper argument is always bigger
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int n)
{
  int i;
  if (n == 0 || n == 1)
    return 0;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int lower, upper, num;

  srand(time(0));
  printf("Enter lower limit : ");
  scanf("%d", &lower);
  printf("Enter upper limit : ");
  scanf("%d", &upper);

  printf("\nThe random number is : ");

  int check = 0;
  while (check != 1)
  {
    num = rand() % (upper - lower + 1) + lower;
    check = isPrime(num);
  }
  printf("%d\n", num);

  return 0;
}
