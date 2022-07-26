// Write a programme to find square root of a number
#include <math.h>
#include <stdio.h>

double squareRoot(double input)
{
  double result;
  result = sqrt(input);
  printf("%f\n", result);
}

int main()
{
  int num = 25;
  printf("Input  : %d\n", num);
  printf("Output : ");
  squareRoot(num);
}
