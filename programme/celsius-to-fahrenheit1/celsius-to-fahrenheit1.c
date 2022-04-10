//C# program to convert the temperature from Celsius to Fahrenheit

#include <stdio.h>

void main()
{
  float c,f;
  printf("Input ( C ) : ");
  scanf("%f", &c);
  f = ((9 * c) / 5) + 32;
  printf("Output ( F )  : %f\n", f);
}
