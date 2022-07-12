// Write a programme to find cube of a number
#include <stdio.h>

int main()
{
  int number = 0;
  printf("Enter an integer: ");
  scanf("%d", &number);

  int result = number * number * number;

  printf("\nInput  : %d", number);
  printf("\nOutput : %d\n", result);
  return 0;
}
