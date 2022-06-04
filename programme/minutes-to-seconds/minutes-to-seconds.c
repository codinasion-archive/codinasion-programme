#include <stdio.h>

int main(void)
{
  double minutes;
  printf("Min : ");
  scanf("%lf", &minutes);
  int seconds = minutes * 60;
  printf("Sec : %d\n", seconds);
  return 0;
}
