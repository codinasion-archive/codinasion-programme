//Programme to calculate square root of a number in C++

#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */

int main ()
{
  double param, result;
  param = 25.0;
  result = sqrt (param);
  printf ("sqrt(%f) = %f\n", param, result);
  return 0;
}
