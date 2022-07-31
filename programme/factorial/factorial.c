// Write a programme to print factorial of a number
#include <stdio.h>
#include <stdlib.h> /* for atoi and atof function */

#define LIMIT 32 /* longest input allowed */

int factorial(int);

int main()
{
  int input;
  double inputdouble;
  char inputstr[LIMIT];

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", inputstr);
    input = atoi(inputstr);
    inputdouble = atof(inputstr);
    if (input == inputdouble && input >= 1)
      break;
    else
    {
      printf("\nInvalid input.\nInput  : ");
      continue;
    }
  }
  printf("\nOutput : %d\n", factorial(input));
  return 0;
}

int factorial(int n)
{
  int result = 1;
  for (int i = n; i > 0; i--)
    result *= i;
  return result;
}
