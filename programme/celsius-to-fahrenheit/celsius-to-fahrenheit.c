// Write a programme to convert the temperature from celsius to fahrenheit
#include <stdio.h>

void main()
{
  float c, f;
  printf("Input ( C )  : ");
  scanf("%f", &c);
  f = ((9 * c) / 5) + 32;
  printf("Output ( F ) : %.2f\n", f);
}
