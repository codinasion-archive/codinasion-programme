// Write a programmeto convert radians to degrees
#include <stdio.h>

int main()
{
  int radian;
  printf("Radians : ");
  scanf("%d", &radian);

  printf("Degrees : %0.5f\n", radian * 180 / 3.141592653589793);

  return 0;
}
